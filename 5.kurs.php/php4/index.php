<?php
session_start();
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="utf-8">
    <title>Darmowy Ebook o HTML!</title>
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
            <h1>Darmowy ebook dla Ciebie!</h1>
        </header>

        <main>
            <article>
			
				<div class="partL">
					
					<img class="cover" src="img/html-ebook.jpg" alt="okładka ebooka">
					
				</div>
				
				<div class="partR">
				
					<p class="content">Zapisz się na naszą listę mailową, dzięki czemu otrzymasz zupełnie ZA DARMO fantastycznego, legendarnego ebooka pt. "HTML na przykładach", który już zdołał odmienić życie zawodowe 2147483647 przyszłych programistów!</p>
					
					<p class="content">Nauka HTML jeszcze nigdy nie była tak prosta! Wyjaśnienia udzielone na memach zostaną wręcz wdrukowane w Twoją podświadomość - CIA, FBI oraz inne KGB i Mosady go nienawidzą, gdyż użył ich tajnych metod wywiadowczych do nauczania HTML. Sztuczna inteligencja, która przyswoiła niniejszego ebooka stworzyła później front-endowy design znanego serwisu ePUAP. Zapraszamy do lektury!</p>
					
					<form method="post" action="save.php">
					
						<label>Wpisz poniżej swój poprawny adres e-mail:
							<input type="email" name="email" <?= isset($_SESSION['given_email']) ? 'value="' . $_SESSION['given_email'] . '"' : '' ?>>
						</label>
						<input type="submit" value="Hurra, wyślij mi tego ebooka!">
						
						<?php
						if (isset($_SESSION['given_email'])) {
							echo '<p>To nie jest poprawny adres!</p>';
							unset($_SESSION['given_email']);
						}
						?>
					
					</form>

				</div>	

				<div style="clear:both"></div>
				
            </article>
        </main>

    </div>
</body>
</html>