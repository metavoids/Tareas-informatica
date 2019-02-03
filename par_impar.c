#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num,i;
	printf("Introduzca un numero\n");
	scanf("%d",&num);
	if (num%2==0)
	printf("El numero es par");
	else 
	printf("El numero es impar");
}
