<?php

	session_start();  // Rozpocznij sesję

	if ((!isset($_POST['login'])) || (!isset($_POST['haslo']))) {
		header('Location: index.php');  // Przekieruj na stronę główną, jeśli brak danych logowania
		exit();
	}

	require_once "connect.php";  // Wczytaj plik z danymi do połączenia z bazą danych
	mysqli_report(MYSQLI_REPORT_STRICT);

	try {
		$polaczenie = new mysqli($host, $db_user, $db_password, $db_name);  // Utwórz nowe połączenie z bazą danych

		if ($polaczenie->connect_errno != 0) {
			throw new Exception(mysqli_connect_errno());  // Rzuć wyjątek w przypadku błędu połączenia
		} else {
			$login = $_POST['login'];  // Pobierz login z formularza
			$haslo = $_POST['haslo'];  // Pobierz hasło z formularza

			$login = htmlentities($login, ENT_QUOTES, "UTF-8");  // Zabezpiecz dane przed atakami SQL Injection

			if ($rezultat = $polaczenie->query(
				sprintf("SELECT * FROM uzytkownicy WHERE user='%s'",
					mysqli_real_escape_string($polaczenie, $login))
			)) {
				$ilu_userow = $rezultat->num_rows;

				if ($ilu_userow > 0) {
					$wiersz = $rezultat->fetch_assoc();

					if (password_verify($haslo, $wiersz['pass'])) {
						// Jeśli hasło jest poprawne, zapisz dane do sesji i przekieruj do panelu gry
						$_SESSION['zalogowany'] = true;
						$_SESSION['id'] = $wiersz['id'];
						$_SESSION['user'] = $wiersz['user'];
						$_SESSION['drewno'] = $wiersz['drewno'];
						$_SESSION['kamien'] = $wiersz['kamien'];
						$_SESSION['zboze'] = $wiersz['zboze'];
						$_SESSION['email'] = $wiersz['email'];
						$_SESSION['dnipremium'] = $wiersz['dnipremium'];

						unset($_SESSION['blad']);  // Usuń ewentualny wcześniejszy błąd logowania
						$rezultat->free_result();
						header('Location: gra.php');  // Przekieruj do panelu gry
					} else {
						$_SESSION['blad'] = '<span style="color:red">Nieprawidłowy login lub hasło!</span>';
						header('Location: index.php');  // Przekieruj na stronę główną w przypadku błędnego loginu lub hasła
					}
				} else {
					$_SESSION['blad'] = '<span style="color:red">Nieprawidłowy login lub hasło!</span>';
					header('Location: index.php');  // Przekieruj na stronę główną w przypadku braku użytkownika o podanym loginie
				}
			} else {
				throw new Exception($polaczenie->error);  // Rzuć wyjątek w przypadku błędu zapytania SQL
			}

			$polaczenie->close();  // Zamknij połączenie z bazą danych
		}
	} catch (Exception $e) {
		echo '<span style="color:red;">Błąd serwera! Przepraszamy za niedogodności i prosimy o wizytę w innym terminie!</span>';
		echo '<br />Informacja developerska: ' . $e;  // Wyświetl komunikat błędu w przypadku wyjątku
	}
?>