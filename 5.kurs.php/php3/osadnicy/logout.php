<?php

	session_start();  // Rozpocznij sesję

	session_unset();  // Wyczyść wszystkie zmienne z sesji

	header('Location: index.php');  // Przekieruj na stronę główną

?>


<!-- 
session_start();: Rozpoczyna sesję PHP, co jest konieczne, aby używać sesji w skrypcie.

session_unset();: Usuwa wszystkie zmienne z sesji. W tym przypadku, jest to 
używane do wylogowania użytkownika poprzez wyczyszczenie danych sesji.

header('Location: index.php');: Przekierowuje użytkownika na stronę główną (index.php). Po 
wyczyszczeniu sesji, użytkownik jest przekierowywany z powrotem do strony logowania / strony głównej. 
-->