#include <iostream>
#include <stdio.h>
#include <math.h> 
typedef struct
{
	float x;
	float y;
	float r;
} punto;
float Distancia(punto p1, punto p2)
{
	float delta_x = p1.x - p2.x;
	float delta_y = p1.y - p2.y;
	float norma = delta_x * delta_x + delta_y * delta_y;
	float dist = sqrt(norma);
	return dist;
}
void datos(punto &p1, punto &p2)
{
	printf("Introduzca las coordenadas del primer punto y el radio\n");
	scanf("%f %f %f", &p1.x, &p1.y, &p1.r);
	printf("Introduzca las coordenadas del segundo punto y el radio\n");
	scanf("%f %f %f", &p2.x, &p2.y, &p2.r);
}
bool verify_coll(float d, punto p1, punto p2)
{
	if (d > p1.r)
	{
		if (d < p1.r + p2.r)
			return 1;
		else
			return 0;
	}
	if (d < p1.r)
	{
		if (p1.r < d + p2.r)
			return 1;
		else
			return 0;
	}
}
int main(void){
	punto punto1, punto2;
	datos(punto1,punto2);
	float d = Distancia(punto1, punto2);
	bool colision = verify_coll(d, punto1, punto2); // solo funciona cuando la mayor circunferencia se guarda en el primer punto, se arregla en la toma de datos poniendo siempre el mayor en el p1 (no lo he hecho)
	printf("Collision?:\n %d\n", colision);
	system("pause");
}