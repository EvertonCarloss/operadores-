#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

// OPERADORES T�RNARIOS.

// DECLRANDO AS VARIAV�IS.
int a = 4;
int b = 5;
int c = (a>b) ? b*2:a+8;

 // (a>b) - VERIFICANDO SE A  � MAIOR QUE B, SE FOR ELE RETORNAR VERDEIRO(12) SE NAO RETORNA FALSO(10).

printf("O RESULTADO DA OPERA��O � %d", c);





}
