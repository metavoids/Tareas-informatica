#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
class persona
{
public:
	persona(const char *nom, long dni);
	persona() :nombre(NULL), DNI(0) { cout << "yo voy antes"<<endl; }
	~persona(); //podría haberse escrito ~persona();
	void mostrar();
private:
	char *nombre;
	long DNI;
};
persona::persona(const char *nom, long dni)
{
	nombre = new char[strlen(nom) + 1];
	strcpy(nombre, nom);
	DNI = dni;
	cout << "Construyendo " << nombre << endl;
}
persona::~persona() // ??- y ~ son lo mismo
{
	cout << "Destruyendo " << nombre << endl;
	delete[] nombre;
}
void persona::mostrar()
{
	cout << "almacenado:" << nombre << " DNI:" << DNI << endl;
}
void main(void)
{
	persona p1("dura todo el main", 10);
	for (int i = 0; i < 2; i++)
	{
		persona p2("Dura el ciclo del for ", i);
		p2.mostrar();
	}
	system("pause");
}