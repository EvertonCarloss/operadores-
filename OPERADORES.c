#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

// OPERADORES ARÍTIMETICOS.

// VARIAVEIS.

int n1,n2;
int soma,subtracao;
char operacao[10];


// DECLARANDO VARIAVEIS.

printf("INFORME O PRIMEIRO NÚMERO: ");
scanf("%d",&n1);
printf("INFORME O SEGUNDO NÚMERO: ");
scanf("%d",&n2);
printf("QUAL OPERAÇÃO QUER USAR: ");
scanf("%s", operacao);

soma = n1 + n2;
subtracao = n1 - n2;












}
