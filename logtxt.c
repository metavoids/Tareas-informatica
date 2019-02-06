#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	FILE *f=fopen("log.txt","r");
	char str[50];
	int j=0,i;
	while(!feof(f)){
	 	fgets(str,50, f);
	 	j++;
	 	if(ferror(f)){
	 	puts("error");
	 	break;
		 }
	}
	rewind(f);
	for(i=1;i<j;i++)
	{
		fgets(str,50, f);
		str[strlen(str)-1]=' ';
	 	printf("%s",str);
	}
	fgets(str,50, f);
	printf("%s",str);
	fclose(f);
	return 0;
}

