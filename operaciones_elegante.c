#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,resultado;
	int x,y;
	char op;
	get_info(&a,&b,&op);
	printf("",b);
	switch (op)
	{
		case '*':
			resultado=a*b;
			break;
		case '+':
			resultado=a+b;
			break;
		case'-':
			resultado=a-b;
			break;
		case'/':
			resultado=a/b;
			break;
		default:
			printf("esa operacion no vale");
	}
	printf("%d",resultado);
	return 0;
}
int get_info(int *a,int *b,char *op)
{
	int i,k;
	char j;
	puts("INTRODUZCA DOS NUMEROS");
	while(scanf("%d%c%d",&i,&j,&k)!=3)
	{
		puts("introduzca bien");
		fflush(stdin);
	}
	*a=i;
	*op=j;
	*b=k;
	return 1;
	
}

