#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

// OPERADORES TÉRNARIOS.

// DECLRANDO AS VARIAVÉIS.
int a = 4;
int b = 5;
int c = (a>b) ? b*2:a+8;

 // (a>b) - VERIFICANDO SE A  É MAIOR QUE B, SE FOR ELE RETORNAR VERDEIRO(12) SE NAO RETORNA FALSO(10).

printf("O RESULTADO DA OPERAÇÃO É %d", c);





}
