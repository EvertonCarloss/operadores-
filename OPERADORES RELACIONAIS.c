#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

// OPERADORES RELACIONAIS.

int a = 5;
int b = 5;
int c = ( a==b);
// SEMPRE QUE FOR VERDADEIRO VAI RETORNAR 1 E SE FOR FALSO RETORNARAR 0.
printf("O RESULTADO DA OPERAÇÃO É %d", c);




}
