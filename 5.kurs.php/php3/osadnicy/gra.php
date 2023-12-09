<?php

	session_start();  // Rozpocznij sesję

	// Sprawdź, czy użytkownik jest zalogowany
	if (!isset($_SESSION['zalogowany'])) {
		header('Location: index.php');  // Przekieruj na stronę logowania, jeśli nie jest zalogowany
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
	
<?php

	echo "<p>Witaj ".$_SESSION['user'].'! [ <a href="logout.php">Wyloguj się!</a> ]</p>';  // Wyświetl powitanie i link do wylogowania
	echo "<p><b>Drewno</b>: ".$_SESSION['drewno'];  // Wyświetl ilość drewna
	echo " | <b>Kamień</b>: ".$_SESSION['kamien'];  // Wyświetl ilość kamienia
	echo " | <b>Zboże</b>: ".$_SESSION['zboze']."</p>";  // Wyświetl ilość zboża
	
	echo "<p><b>E-mail</b>: ".$_SESSION['email'];  // Wyświetl adres e-mail użytkownika
	echo "<br /><b>Dni premium</b>: ".$_SESSION['dnipremium']."</p>";  // Wyświetl liczbę dni premium użytkownika
	
?>

</body>
</html>