#include <iostream>
#include <time.h>
using namespace std;
class B {
public:
	int dato;
	B() { dato = 0; cout << "llamando al constructor de B sin argumentos" << endl; }
	~B() { cout << "llamando al destructor de B" << endl; }
};
class A {
	B b; //dato miembro objeto de tipo de usuario B
public:
	A() { cout << "llamando al constructor de A sin argumentos" << endl; }
	~A() { cout << "llamando al destructor de A" << endl; }
};
void main()
{
	A a;
	system("pause");
}