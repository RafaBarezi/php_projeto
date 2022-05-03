<?php

/*

 Tipos de dados:
 

 >>> tipo lógico >>> boolean (condicional - true ou false);
 
 >>> tipo texto >>> string (todo caractere, a maior parte das informações manipulável);
 
 >>> tipo inteiro >>> interger (todo n° inteiro, exceto n° muito grandes, que são automaticamente transformados em float);
 
 >>> tipo ponto flutuante >>> float (todo n° decimal e fração, é capaz de armazenar um n° muito maiores);
 
 >>> tipo array >>> array (é como uma lista de informações, uma estrutura parecida com o tipo dicionário);
 
 >>> objetos >>> objects (execução de uma classe, que é o projeto do objeto. Objeto é uma instância desta classe, a execução deste projeto);
 
 >>> recursos >>> resource (tudo o que não puder ser incluído nas categorias anteriores, como imagens, arquivos mp3, dados binários.
 
 */

 # gettype nos diz qual é o tipo da variável.
 
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