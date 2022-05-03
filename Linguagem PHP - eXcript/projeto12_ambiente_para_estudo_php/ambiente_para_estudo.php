<!DOCTYPE html>

<html lang = "pt-br">

<head>

	<meta charset = "UTF-8">
	
	<litle>Ambiente para estudo PHP (Boilerplate code)</litle>

</head>

<body>
	
	<?php 
	   
	if(isset($_POST["valor1"]))   # isset verifica se determinada informação existe
	{
	    echo $_POST["valor1"];    
	}
	
	?>
	
	<form method="POST">
		
		<input type = "text" name = "valor1"/>
		
		<input type = "submit" />
	
	</form>

</body>

</html>