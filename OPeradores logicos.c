#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

// TRABALHANDO COM OPERADORES L�GICOS.

/*
 && CONJUN��O - OS DOIS TEM QUE SER VERDADEIROS.

 II - BASTAR UM SER VERDADEIRO.

 ! - NEGA��O.

*/


// ENTRADA DAS VARIAVEIS.
int a = 5 , b = 4, c = 2;


// SA�DA DOS DADOS
printf("%s", a > b  || a<c && !c!=4? "VERDADEIRO" : "FALSO");




}
