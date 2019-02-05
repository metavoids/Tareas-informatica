#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, suma=0;
	printf("introduzca numero a sumar\n");
	scanf("%d",&a);
	while(a>=0)
	{
		suma=a+suma;
		printf("introduzca numero a sumar\n");
		scanf("%d",&a);
	}
	printf("La suma final será %d",suma);
	return 0;
}
