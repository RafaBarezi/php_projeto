<?php

 /*

 Opera��o m�dulo ou resto da divis�o � a obten��o do restante da divis�o entre dois n�s inteiros positivos. O m�dulo � obtido atrav�s de um operador [%]

 Se um dos n�mero for decimal o valor ser� arredondado pelo php e a conta ser� feita apenas com os n�meros inteiros.
 
 */

 $num1 =9;
 $num2 =2;
 $res = $num1 /$num2;
 $resto = $num1 % $num2;
 
 echo $num1 . " dividido por " . $num2 . " = " . $res;
 echo "<br>";
 echo "O resto da divis�o � " . $resto;
 
 # Vejamos agora a opera��o com decimais
 
 echo "<br>";
 echo "<br>";
 echo 7 % 3.3;
 
 # Com a fun��o fmod conseguimos o resultado sem arredondamentos:
 # Essa fun��o serve para verificar o resto indepedentemente se inteiro ou decimal
 
 echo "<br>";
 echo fmod(7, 3.3);
 