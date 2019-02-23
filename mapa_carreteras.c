#include <stdio.h>
#include <stdlib.h>

struct ciudad{
	int ref;
	char nombre[20];
};
struct carretera{
	int partida;
	int llegada;
	int distancia;
};
int main(int argc, char *argv[]) {
	FILE *data=fopen("mapa.txt","r");
	int num_ciu,num_carr,token=1,i=0,j=0;
	char line[100],token1,edge[4];
	if(data==NULL){
 	puts("file not found\n");
 	return -1;
	}
	else
	{
		while(token!='p'){
			token=fgetc(data);
				if (token=='c')
				{
					fgets(line,100,data);
					printf ("%s",line);
				}
				if(line[0]=='\0' || line[0]=='\n') continue;
		}
	fscanf(data,"%c %s %d %d",&token1,edge,&num_ciu,&num_carr);
	printf("el numero de ciudades es %d\nel numero de carreteras es %d\n",num_ciu,num_carr);
	printf("los datos son:\n");
	struct ciudad *d = malloc(num_ciu * sizeof(struct ciudad));
	struct carretera *t = malloc(num_carr * sizeof(struct carretera));
	if ((d  == NULL) ||(t  == NULL) )
	puts("Error al intentar reservar memoria ");
	while(!feof(data)){
	 fgets(line, 20, data);
	 if(line[0]=='\0' || line[0]=='\n') continue;
	sscanf(line, "%c", &token1);
	 if(token1=='n'){
	 	sscanf(line, "%c %d %s", &token1,&d[i].ref,d[i].nombre);
	 	i++;
	 }
	 if(token1== 'e'){
		sscanf(line, "%c %d %d %d", &token1,&t[j].partida,&t[j].llegada,&t[j].distancia);
		printf("Salida:%s llegada:%s distancia:%d km\n",d[t[j].partida-1].nombre,d[t[j].llegada-1].nombre,t[j].distancia);
		j++;
	 }
}
	return 0;
}
}
