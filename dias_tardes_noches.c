#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int hora;
	printf("Introduzca hora\n");
	scanf("%d",&hora);
	if (0<=hora&&hora<=12)
	printf("BUENOS DIAS\n");
	else if (12<hora&& hora<=18)
	printf("BUENAS TARDES\n");
	else if(18<hora&& hora<=24)
	printf("BUENAS NOCHES\n");
	return 0;
}
