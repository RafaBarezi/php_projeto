<?php

// São usados para ligar duas expressões:

// conjunção >>> E (&& ou and)
// disjunção >>> OU (|| ou or)
// negação   >>> (NOT(!))

//(expressão1==true)&&(expressão2==true)
//(expressão1)&&(expressão2)   No php toda expressão é comparada ao TRUE, portanto não é obrigatório definir. Ele sempre vai verificar se a expressão é verdadeira.
//(1>2)&&(2>3);

//(expressão1==true)||(expressão2==true)
//(expressão1)||(expressão2)
//(1>2)||(2>3);

//(expressão1==true)||(expressão2==true)
//(expressão1)||(expressão2)

$num = 50;

if(($num > 10)&&($num < 100));
{
    echo "é verdadeira<BR>";
}

if(($num > 10)||($num < 100));
{
    echo "é verdadeira<BR>";
}