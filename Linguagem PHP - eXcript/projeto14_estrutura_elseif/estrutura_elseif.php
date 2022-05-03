<!DOCTYPE html>

<html lang = "pt-br">

<head>

<meta charset = "UTF-8">

<litle>Estrutura elseif</litle>

</head>

<body>

<?php

    if(isset($_POST['idade']))
    {
        $idade = $_POST['idade'];        
    
        if($idade < 18)
        {
            echo "<br><br>A idade informada é de uma pessoa menor<br>";
        }
        elseif($idade >= 18 and $idade < 65)
        {
            echo "<br><br>A idade informada é de uma pessoa adulta<br>";
        }
        else
        {
            echo "<br><br>A idade informada é de uma pessoa idosa<br>";
        }
    }
    
?>
	
	<form method="POST">
		
		<input type = "text" name = "idade"/>
		
		<input type = "submit" />
	
	</form>

</body>

</html>

