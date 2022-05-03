<?php
echo "Olá, esta frase foi escrita através da instrução echo.<br>";
// não existe uma tradução específica para echo , mas significa "imprime na tela".
echo "Esta é outra linha impressa com a instrução echo.";
//<br> vem de brak line.
print "<br>Esta frase foi impressa com a instrução print.";

// echo é uma função e a print é um procedimento. Recomenda-se usar a echo pois é a mais comum

/*
 
A resposta é gerada da seguinte forma no servidor
recebe uma requisição .php. foi executado 

arquivo é aberto e todo código é enviado para o módulo php 
depois é iniciada a montagem da resposta :

echo"<html>";
echo"<body>";
echo"texto xyz";
echo"</body>";    fechamento da tag body
echo"</html>";    fechamento da tag html

A resposta é retornada para o navegador do nosso cliente

recebe requisição >>> abre arquivo >>> interpreta script PHP >>> retorna requisição HTML

*/