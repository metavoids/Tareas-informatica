#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
class Cadena {
private:
	const char* c;

public:
	Cadena(const char* str) : c(str) {}
	~Cadena() {}
	void mostrar() ;
	void pasar_a_mayusculas();
};

void Cadena::mostrar() 
{
	cout << c << endl;
}

 void Cadena::pasar_a_mayusculas()
{
	static char caracter[50];
 //tambien se puede  const_cast<char*>(p)
	
	int i = 0;
	while (c[i]) {
		caracter[i] = (char)(toupper(c[i]));	
		i++;
	}
	
	//el puntero es a un caracter constante. Al hacer esto lo que modificas es a lo que apunta
	c = caracter;
}

void main() {
	Cadena C("hola amigos");
	C.pasar_a_mayusculas();
	C.mostrar();
	system("pause");
}