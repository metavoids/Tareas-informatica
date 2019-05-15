#include <iostream> //flujos a pantalla
#include <sstream> //fujos a cadena en memoria
#include <fstream> //flujos a fichero
void print_state(const std::ios& stream) {
	std::cout << " good()=" << stream.good();
	std::cout << " eof()=" << stream.eof();
	std::cout << " fail()=" << stream.fail();
	std::cout << " bad()=" << stream.bad();
}
using namespace std;
void main() {
	int x, y;
	std::cin >> x >> y; //pues de izquierda a derecha va sacando del flujo lo copia y vuelve a ver el flujo, asi con los todos los que hayan
	print_state(std::cin);
	system("pause");
}