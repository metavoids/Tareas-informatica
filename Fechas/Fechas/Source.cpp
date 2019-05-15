#include <iostream>

class Fecha {
private:
	int dia;
	int mes;
	int ano;
public:
	Fecha(int d, int m, int a) : dia(d), mes(m), ano(a) {}
	~Fecha() { std::cout << "se destruyó"; }
	friend bool operator < (const Fecha& lhs, const Fecha& rhs);
	void imprimir() const;
};

bool operator<(const Fecha & lhs,const Fecha & rhs)
{	
	if (lhs.ano < rhs.ano)
		return true;
	else if (lhs.mes < rhs.mes)
		return true;
	else if (lhs.dia < rhs.dia)
		return true;
	else
	return false;
}
using namespace std;
void main(){
	Fecha f1(29, 3, 1998);
	Fecha f2(21, 5, 1998);
	bool resultado = f1 < f2;
	cout << resultado << endl;
	f2.imprimir();
	system("pause");
}

void Fecha::imprimir() const
{
	cout << dia << "/" << mes << "/" << ano << endl;
}
