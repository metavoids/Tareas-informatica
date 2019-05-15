#include <iostream>
#include <string>
using namespace std;
class Persona {
private:
	string name;
public:
	Persona(string n) : name(n) {}
	string print() { return name; }
	ostream& operator <<(ostream& o);
};
ostream & Persona::operator<<(ostream & o)
{
	o << print();
	return o;
}

class Adulto :public Persona {
public:
	Adulto(string n) :Persona(n) {}
	ostream& print(ostream& o) { 
		o << "Adulto: ";
		Persona::operator<<(o) ;
		return o;
	}
};
class Estudiante :public Adulto {
public:
	Estudiante(string n) :Adulto(n) {}
	ostream& print(ostream& o) { 
		o << "Estudiante: ";
		Adulto::print(o);
		return o ; }
};

void main() {
	Estudiante e("jose");
	Adulto t("marcos");
	e.print(cout);
	system("pause");
}


