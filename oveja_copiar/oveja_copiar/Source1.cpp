#include <iostream>
using namespace std;

class Foo {
public:
	int vector[2];
	Foo() {
		cout << "llamada al constructor sin parametros" << endl;
		vector[0] = 0; vector[1] = 1;
	}
	Foo(const Foo& c) { cout << "llamada al constructor copia" << endl; }
	void print() {
		for (int i = 0; i < 2; i++) { cout << vector[i] << " "; }
	}
	//…
};
void main() {
	//…
	Foo f1;
	f1.vector[0] = 0;
	f1.vector[1] = 1;
	Foo f2 = f1;
	f2.print();
	//…
	system("pause");
	//…
	
}