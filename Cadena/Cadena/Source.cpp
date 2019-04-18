#include <iostream>
#include <ctype.h>
#define MAX 100
using namespace std;
class cadena {
private:
	const char str[MAX];
public:
	//prototipo metodos
	cadena() : str("jejejej") {}
	
	void mostrar();
	void pasar_a_mayusculas();

};
//metodos.

void cadena::mostrar()
{
	cout << str << endl;
}
void cadena::pasar_a_mayusculas() {
	int i = 0;
	char c;
	while (str[i])
	{
		c = str[i];
		putchar(toupper(c));
		i++;
	}
}
void main() {
	cadena str;
	str.mostrar();
	str.pasar_a_mayusculas();
	system("pause");

}


