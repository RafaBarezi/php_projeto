<!DOCTYPE html>

<html lang ="pt">

<head>

	<meta http-equiv="content-type" content="text/html;charset=utf-8" />
	
	<litle>N�meros pares e �mpares<br><br></litle>

</head>

<body>
	
	<?php 
	   
	if(isset($_POST["num"]))    
	{
	    echo $_POST["num"];
	    
	    $num = $_POST["num"];
	    
	    if($num % 2 == 0)
	    {
	        echo "<br><br>O n�mero informado � par<br>"; 
	    }
	    else
	    {
	        echo "<br><br>O n�mero informado � �mpar<br>";
	    }	           
	}
	
	?>
	
	<form method="POST">
		
		<input type = "text" name = "num"/>
		
		<input type = "submit" />
	
	</form>

</body>

</html>