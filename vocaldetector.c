#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a;
	printf("Introduzca una letra\n");
	scanf("%c",&a);
	switch(a)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("HA INTRODUCIDO UNA VOCAL");
			break;
		default:
			printf("NO HA INTRODUCIDO UNA VOCAL");
			break;
	}
	return 0;
}
