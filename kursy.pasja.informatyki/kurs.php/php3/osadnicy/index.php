<?php

	session_start();  // Rozpocznij sesję

	if ((isset($_SESSION['zalogowany'])) && ($_SESSION['zalogowany'] == true)) {
		header('Location: gra.php');  // Przekieruj do strony gry, jeśli użytkownik jest zalogowany
		exit();
	}

?>

<!DOCTYPE HTML>
<html lang="pl">
<head>
	<meta charset="utf-8" />
	<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
	<title>Osadnicy - gra przeglądarkowa</title>
</head>

<body>
	
	Tylko martwi ujrzeli koniec wojny - Platon<br /><br />
	
	<a href="rejestracja.php">Rejestracja - załóż darmowe konto!</a>
	<br /><br />
	
	<form action="zaloguj.php" method="post">
	
		Login: <br /> <input type="text" name="login" /> <br />  <!-- Formularz do wprowadzania loginu -->
		Hasło: <br /> <input type="password" name="haslo" /> <br /><br />  <!-- Formularz do wprowadzania hasła -->
		<input type="submit" value="Zaloguj się" />
	
	</form>
	
<?php
	if(isset($_SESSION['blad']))	echo $_SESSION['blad'];  // Wyświetl komunikat o błędzie, jeśli istnieje
?>

</body>