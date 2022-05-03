<?php

/*

 Tipos de dados:
 

 >>> tipo l�gico >>> boolean (condicional - true ou false);
 
 >>> tipo texto >>> string (todo caractere, a maior parte das informa��es manipul�vel);
 
 >>> tipo inteiro >>> interger (todo n� inteiro, exceto n� muito grandes, que s�o automaticamente transformados em float);
 
 >>> tipo ponto flutuante >>> float (todo n� decimal e fra��o, � capaz de armazenar um n� muito maiores);
 
 >>> tipo array >>> array (� como uma lista de informa��es, uma estrutura parecida com o tipo dicion�rio);
 
 >>> objetos >>> objects (execu��o de uma classe, que � o projeto do objeto. Objeto � uma inst�ncia desta classe, a execu��o deste projeto);
 
 >>> recursos >>> resource (tudo o que n�o puder ser inclu�do nas categorias anteriores, como imagens, arquivos mp3, dados bin�rios.
 
 */

 # gettype nos diz qual � o tipo da vari�vel.
 
  $str = "eXcript";
  echo gettype($str);
  
  echo "<br>";

  $num = 10;
  echo gettype($num);
  
  echo "<br>";
  
  $dinheiro = 1500.32;
  echo gettype($dinheiro);
  
  echo "<br>";
  
  $bool = true;
  echo gettype($bool);