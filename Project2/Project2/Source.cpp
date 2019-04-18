#include <stdio.h>
#include <math.h>
float Distancia(float x1, float y1, float x2, float y2)
{
	float delta_x = x2 - x1;
	float delta_y = y2 - y1;
	float norma = delta_x * delta_x + delta_y * delta_y;
	float dist = sqrt(norma);
	return dist;
}
void main(void)
{
	float x1, y1, x2, y2;
	printf("Introduzca las coordenadas del primer punto\n");
	scanf("%f %f", &x1, &y1);
	printf("Introduzca las coordenadas del segundo punto\n");
	scanf("%f %f", &x2, &y2);
	float d = Distancia(x1, y1, x2, y2);
	printf("Distancia entre los puntos=%f\n", d);
}