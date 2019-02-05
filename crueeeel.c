#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[]="Hola mundo creeeel";
	char *pch;
	pch=strchr(str,'e');
	strncpy(pch,"uel",6);
	puts(str);
	return 0;
}
