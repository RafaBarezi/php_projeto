<!DOCTYPE html>
<html lang="pt-br">

<head>
	<meta charset = "UTF-8">
	<litle>Tela de Login e Senha</litle>
</head>

<body>
	
<?php 

 $login = "eXcript";
 $senha = "123456";

 if(isset($_POST["login"]))
 {
     echo $_POST["login"]."<br>";    
     echo $_POST["senha"];
     
     if($_POST["login"]== $login && $_POST["senha"] == $senha)
     {
         echo "Login efetuado com sucesso";
     }
     else
     {
         echo "Login ou senha inválidos";
     }
 }

 // para que a sneha não seja mostrada basta inserir o comando "password" abaixo
 
?>	
	
	<form method="post		">
		
		<input type = "text" name = "login"><br>
		<input type = "password" name = "senha">
		<input type = "submit">
	
	</form>

</body>

</html>