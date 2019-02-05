#include <stdio.h>
#include <stdlib.h>
#define NUM_PUNTOS 4
struct punto{
	int x;
	int y;
};
typedef struct punto punto_t;

int main(int argc, char *argv[]) {
	int i;
	int j,k;
	double x_med,y_med;
	punto_t centroide[NUM_PUNTOS];
	printf("introduzca puntos\n");
	for(i=1;i<NUM_PUNTOS;i++)
	scanf("%d %d\n",&centroide[i].x,&centroide[i].y);
	x_med=(centroide[1].x+centroide[4].x)/2;
	y_med=(centroide[2].y+centroide[3].y)/2;
	printf("%d %d",centroide[2].x, centroide[2].y);
	for(j=0;j<centroide[3].y;j++)
	{
		for(k=0;k<centroide[k+1].x;k++)
		printf("*");
		printf("\n");
	}
	
	
	return 0;
}
