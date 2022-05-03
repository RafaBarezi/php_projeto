<!DOCTYPE html>

<html lang ="pt">

<head>

	<meta http-equiv="content-type" content="text/html;charset=utf-8" />
	
	<litle>Números pares e ímpares<br><br></litle>

</head>

<body>
	
	<?php 
	   
	if(isset($_POST["num"]))    
	{
	    echo $_POST["num"];
	    
	    $num = $_POST["num"];
	    
	    if($num % 2 == 0)
	    {
	        echo "<br><br>O número informado é par<br>"; 
	    }
	    else
	    {
	        echo "<br><br>O número informado é ímpar<br>";
	    }	           
	}
	
	?>
	
	<form method="POST">
		
		<input type = "text" name = "num"/>
		
		<input type = "submit" />
	
	</form>

</body>

</html>