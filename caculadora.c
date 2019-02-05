#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b,c;
	char operando;
	printf("introduzca operandos\n");
	scanf("%d%c%d",&a,&operando,&b);
	switch(operando)
	{
		case '+':
			c=a+b;
			printf("El resultado es %d",c);
			break;
		case '-':
			c=a-b;
			printf("El resultado es %d",c);
			break;
		case '*':
			c=a*b;
			printf("El resultado es %d",c);
			break;
		case '/':
			c=a/b;
			printf("El resultado es %d",c);
			break;

	}
	return 0;
}
