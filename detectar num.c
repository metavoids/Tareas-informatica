#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[]="K55 y66 F77";
	int i,j;
	for(j=0;j<sizeof(str);j++)
	{
		if (isdigit(str[j]))
		{
			sscanf(str+j,"%d",&i);
			printf("el num es %d\n",i);
			j=j+sizeof(i)/4;
		}
	}
	
}
