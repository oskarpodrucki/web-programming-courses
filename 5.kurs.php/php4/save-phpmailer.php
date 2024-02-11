<?php

session_start();

use PHPMailer\PHPMailer\PHPMailer;
use PHPMailer\PHPMailer\Exception;
use PHPMailer\PHPMailer\SMTP;

require 'PHPMailer/src/Exception.php';
require 'PHPMailer/src/PHPMailer.php';
require 'PHPMailer/src/SMTP.php';


if (isset($_POST['email'])) {
	
	$email = filter_input(INPUT_POST, 'email', FILTER_VALIDATE_EMAIL);
	
	if (empty($email)) {
		
		$_SESSION['given_email'] = $_POST['email'];
		header('Location: index.php');
		
	} else {
		
		require_once 'database.php';
		
		$query = $db->prepare('INSERT INTO users VALUES (NULL, :email)');
		$query->bindValue(':email', $email, PDO::PARAM_STR);
		$query->execute();
		
		try {
			$mail = new PHPMailer();

			$mail->isSMTP();
			$mail->SMTPDebug = SMTP::DEBUG_SERVER;

			$mail->Host = 'smtp.gmail.com';
			$mail->Port = 465;
			$mail->SMTPSecure = PHPMailer::ENCRYPTION_SMTPS;
			$mail->SMTPAuth = true;

			$mail->Username = 'odcinek6php@gmail.com'; // Podaj swój login gmail
			$mail->Password = 'xwjvsoherclzajdn'; // Podaj swoje hasło do aplikacji

			$mail->CharSet = 'UTF-8';
			$mail->setFrom('no-reply@domena.pl', 'Ebooki uczące sztuki');
			$mail->addAddress($email);
			$mail->addReplyTo('biuro@domena.pl', 'Biuro');

			$mail->isHTML(true);
			$mail->Subject = 'Darmowy, świetny ebook - HTML na przykładach';
			$mail->Body = '<html>
	        <head>
	          <title>Twój darmowy ebook!</title>
	        </head>
	        <body>
	          <h1>Dzień dobry!</h1>
	          <p>Oto link do naszego świetnego ebooka: <a href="https://domena.pl/ebook.pdf">POBIERZ EBOOKA</a>
	          </p>
	          <hr>
	          <p>Administratorem Twoich danych osobowych jest:</p>
	          <p>Ebooki uczące sztuki Sp.z.o_O, ul. Wiejska 4/6/8, 00-902 Warszawa</p>
	          <p>Wypisz się z newslettera: <a href="https://domena.pl/unsubscribe">UNSUB</a>
	          </p>
	        </body>
	        </html>
	    	';

	    	$mail->addAttachment('img/html-ebook.jpg');

	    	$mail->send();


		} catch(Exception $e) {
			echo "Błąd wysyłania maila: {$mail->ErrorInfo}";
		}
		
	}
	
	
} else {
	
	header('Location: index.php');
	exit();
}

?>
<!DOCTYPE html>
<html lang="pl">
<head>

    <meta charset="utf-8">
    <title>Zapisanie się do newslettera</title>
    <meta name="description" content="Wysyłanie maili w PHP - funkcja mail(), PHPMailer, SwiftMailer">
    <meta name="keywords" content="php, kurs, PDO, połączenie, MySQL">

    <meta http-equiv="X-Ua-Compatible" content="IE=edge">

    <link rel="stylesheet" href="main.css">
    <link href="https://fonts.googleapis.com/css?family=Lobster|Open+Sans:400,700&amp;subset=latin-ext" rel="stylesheet">
    <!--[if lt IE 9]>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/html5shiv/3.7.3/html5shiv.min.js"></script>
    <![endif]-->

</head>

<body>

    <div class="container">

        <header>
            <h1>Hurra! Wysłaliśmy Ci ebooka!</h1>
        </header>

        <main>
            <article>
                <p class="content">Dziękujemy za zapisanie się na listę mailową naszego newslettera! Link do obiecanego, darmowego ebooka znajdziesz w przysłanej przed chwilą wiadomości! W razie problemów z odnalezieniem maila sprawdź koniecznie zawartość folderu "Spam" w swojej skrzynce pocztowej. Owocnej lektury!</p>
            </article>
        </main>

    </div>

</body>
</html>