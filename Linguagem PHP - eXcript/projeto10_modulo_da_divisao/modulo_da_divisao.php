<?php

 /*

 Operação módulo ou resto da divisão é a obtenção do restante da divisão entre dois n°s inteiros positivos. O módulo é obtido através de um operador [%]

 Se um dos número for decimal o valor será arredondado pelo php e a conta será feita apenas com os números inteiros.
 
 */

 $num1 =9;
 $num2 =2;
 $res = $num1 /$num2;
 $resto = $num1 % $num2;
 
 echo $num1 . " dividido por " . $num2 . " = " . $res;
 echo "<br>";
 echo "O resto da divisão é " . $resto;
 
 # Vejamos agora a operação com decimais
 
 echo "<br>";
 echo "<br>";
 echo 7 % 3.3;
 
 # Com a função fmod conseguimos o resultado sem arredondamentos:
 # Essa função serve para verificar o resto indepedentemente se inteiro ou decimal
 
 echo "<br>";
 echo fmod(7, 3.3);
 