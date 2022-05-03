<?php

// $retorno = operando1 [OPERADOR] operando2
// if = (operando1 [OPERADOR] operando2) ou  if = (retorno)

var_dump(True); //o valor lógico de toda expressão é true ou false

// var_dump() serve para imprimir o tipo de valor e seu resultado

echo "igualdade<br>";

var_dump(10==10);
var_dump(10!=10);
var_dump(11==10);
var_dump(10=='10');

echo "diferente<br>";
var_dump(10!=10);
var_dump(10!=11);

// o sinal de diferença no PHP é != ou <>

var_dump(10<>10)and(10<>11);

echo "idêntico<br>"; 

/// === compara se os valores e os tipos são idênticos 
    
var_dump(10===10);
var_dump(10==='10');

// !== é o sinal de não idêntico

var_dump(10===10);
var_dump(10==='10');

