#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *f;
	f=fopen("log.txt","w");
	if(f==NULL){
	perror("the following error occurred");
 	return -1;
	}
	else{
		fputs("Hola mundo\n",f);
		fclose(f);
	}
	f=fopen("log.txt","a");
	if(f==NULL){
	perror("the following error occurred");
 	return -1;
	}
	else{
		fputs("Adios mundo :(",f);
		fclose(f);
	}
	return 0;
}
