<?php

// S�o usados para ligar duas express�es:

// conjun��o >>> E (&& ou and)
// disjun��o >>> OU (|| ou or)
// nega��o   >>> (NOT(!))

//(express�o1==true)&&(express�o2==true)
//(express�o1)&&(express�o2)   No php toda express�o � comparada ao TRUE, portanto n�o � obrigat�rio definir. Ele sempre vai verificar se a express�o � verdadeira.
//(1>2)&&(2>3);

//(express�o1==true)||(express�o2==true)
//(express�o1)||(express�o2)
//(1>2)||(2>3);

//(express�o1==true)||(express�o2==true)
//(express�o1)||(express�o2)

$num = 50;

if(($num > 10)&&($num < 100));
{
    echo "� verdadeira<BR>";
}

if(($num > 10)||($num < 100));
{
    echo "� verdadeira<BR>";
}