<?php

// $retorno = operando1 [OPERADOR] operando2
// if = (operando1 [OPERADOR] operando2) ou  if = (retorno)

var_dump(True); //o valor l�gico de toda express�o � true ou false

// var_dump() serve para imprimir o tipo de valor e seu resultado

echo "igualdade<br>";

var_dump(10==10);
var_dump(10!=10);
var_dump(11==10);
var_dump(10=='10');

echo "diferente<br>";
var_dump(10!=10);
var_dump(10!=11);

// o sinal de diferen�a no PHP � != ou <>

var_dump(10<>10)and(10<>11);

echo "id�ntico<br>"; 

/// === compara se os valores e os tipos s�o id�nticos 
    
var_dump(10===10);
var_dump(10==='10');

// !== � o sinal de n�o id�ntico

var_dump(10===10);
var_dump(10==='10');

