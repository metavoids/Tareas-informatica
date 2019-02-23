#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	num= get_number();
	if (is_even(num)==1)
	printf("ES PAR");
	else
	printf("ES IMPAR");
	
	return 0;
}
int get_number()
{
	int num=0;
	while (scanf("%d",&num)!=1)
	{
		puts("introduzca un numero");
		setbuf(stdin,NULL);
	}

	return num;
}
int is_even(int dato)
{
	if (dato%2==0)
	return 1;
	else
	return 0;	
}
