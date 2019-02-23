#include <stdio.h>
#include <stdlib.h>

struct datos{
	float x;
	float y;
};
int main(int argc, char *argv[]) {
	FILE *data=fopen("datos.txt","r");
	int n,token=1,i=0;
	char line[100],token1;
	if(data==NULL){
 	puts("file not found\n");
 	return -1;
	}
	else
	{
		while(token!='h'){
		token=fgetc(data);
		if (token=='c'){
			fgets(line,100,data);
			printf ("%s",line);
			}
		}
	fscanf(data,"%c %d",&token1,&n);
	printf("el numero de datos es %d\n",n);
	printf("los datos son:\n");
	struct datos *d = malloc(n * sizeof(struct datos));
	if (d  == NULL) 
	puts("Error al intentar reservar memoria ");
	while(!feof(data)){
		fscanf(data,"%f %f",&d[i].x,&d[i].y);
		printf("%f %f\n",d[i].x,d[i].y);
		i++;
	}	
	return 0;
}
}
