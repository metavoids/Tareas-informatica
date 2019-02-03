#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int vector[]={1,2,3,4,5};
	int *puntero;
	int i;
	for(i=0;i<5;i++){
	puntero=&vector[i];
	printf("direccion %d valor %d\n",puntero,*puntero);
	}
	return 0;
}
