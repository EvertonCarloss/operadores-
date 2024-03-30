#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

// TRABALHANDO COM OPERADORES LÓGICOS.

/*
 && CONJUNÇÃO - OS DOIS TEM QUE SER VERDADEIROS.

 II - BASTAR UM SER VERDADEIRO.

 ! - NEGAÇÃO.

*/


// ENTRADA DAS VARIAVEIS.
int a = 5 , b = 4, c = 2;


// SAÍDA DOS DADOS
printf("%s", a > b  || a<c && !c!=4? "VERDADEIRO" : "FALSO");




}
