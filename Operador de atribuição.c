#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

// OPERADORES DE ATRIBUI��O.

int x = 2;

// EXEMPLO SIMPLIFICADO.    O NORMAL SERIA ASSIM:  X = X + 2;
x += 3;

// SA�DA DE DADOS.
printf("O resultado � %d", x);



}
