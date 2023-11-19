<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Podsumowanie zamówienia</title>
</head>
<body>
    
<?php

    $paczkow = $_POST['paczkow'];
    $rogali = $_POST['rogali'];
    echo "<h2>$paczkow $rogali</h2>";

    $suma = (0.99*$paczkow)+1.30*$rogali;

echo<<<END

    <h2>Podsumowanie zamówienia</h2>
    
    <table border="1" cellpadding="10" cellspacing="0">
    
    <tr>
        <td>Pączek (0.99PLN/szt)</td> <td>$paczkow</td>
    </tr>
    <tr>
        <td>Rogal (1.30PLN/szt)</td> <td>$rogali</td>
    </tr>
    <tr>
        <td>SUMA</td> <td>$suma PLN</td>
    </tr>

    </table>
    <br ><a href="index.php">Powrót do strony głównej</a>

END;
?>

</body>
</html>