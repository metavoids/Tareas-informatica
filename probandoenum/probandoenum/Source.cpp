#include <iostream>
#include <time.h>
using namespace std;

enum dado_t { UNO=1 , DOS, TRES, CUATRO, CINCO, SEIS };
enum formas{circulo, rombo,esfera};
void main(){
	srand(time(NULL));
	dado_t dato = (dado_t)(1 + rand() % 6);
	formas forma = esfera;
	int eso= esfera + circulo;
	cout << dato+dato << endl;
	system("pause");

}