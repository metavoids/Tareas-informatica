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
	std::cin >> x >> y ;
	print_state(cin);
	system("pause");
}