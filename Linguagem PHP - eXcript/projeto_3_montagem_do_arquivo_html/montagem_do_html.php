<?php
echo "Ol�, esta frase foi escrita atrav�s da instru��o echo.<br>";
// n�o existe uma tradu��o espec�fica para echo , mas significa "imprime na tela".
echo "Esta � outra linha impressa com a instru��o echo.";
//<br> vem de brak line.
print "<br>Esta frase foi impressa com a instru��o print.";

// echo � uma fun��o e a print � um procedimento. Recomenda-se usar a echo pois � a mais comum

/*
 
A resposta � gerada da seguinte forma no servidor
recebe uma requisi��o .php. foi executado 

arquivo � aberto e todo c�digo � enviado para o m�dulo php 
depois � iniciada a montagem da resposta :

echo"<html>";
echo"<body>";
echo"texto xyz";
echo"</body>";    fechamento da tag body
echo"</html>";    fechamento da tag html

A resposta � retornada para o navegador do nosso cliente

recebe requisi��o >>> abre arquivo >>> interpreta script PHP >>> retorna requisi��o HTML

*/