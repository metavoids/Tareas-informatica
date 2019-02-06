#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *f=fopen("num.txt","w");
	char str[20];
	if(f==NULL){
	perror("the following error occurred");
 	return -1;
	}
	else{
		fputs("1 2 3 4 5",f);
		fclose(f);
	}
	f=fopen("num.txt","r");
	if(f==NULL){
	perror("the following error occurred");
 	return -1;
	}
	else{
		fseek ( f , -5 , SEEK_END );
		fgets(str,20, f);
		puts(str);
		fclose(f);
	}
	return 0;
}
