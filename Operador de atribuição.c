#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

// OPERADORES DE ATRIBUIÇÃO.

int x = 2;

// EXEMPLO SIMPLIFICADO.    O NORMAL SERIA ASSIM:  X = X + 2;
x += 3;

// SAÍDA DE DADOS.
printf("O resultado é %d", x);



}
