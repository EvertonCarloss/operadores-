#include <stdio.h>
#include <locale.h>


void main () {

setlocale(LC_ALL,"Portuguese");

int x =-1;
int c = (x>0)? 4:8;

printf("O RESULTADO É %d", c);






}
