#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[]="hola mundo creeeeeel";
	char *pChr=str;
	pChr=strstr(str,"cr");
	strcpy(pChr,"cruel");
	puts(str);
	
	return 0;
}

