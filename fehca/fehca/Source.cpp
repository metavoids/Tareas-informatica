#include <iostream>

class fecha {
private:
	int dia;
	int mes;
	int ano;
public:
	fecha(int d = 0, int m = 0, int a = 0) { dia = d; mes = m; ano = a; }
	friend bool operator < (fecha const , fecha const );
	friend void print(fecha const, fecha const);
};

bool operator < (fecha const c1, fecha const c2)
{
	if ((c1.ano > c2.ano) || ((c1.mes > c2.mes) && (c1.ano == c2.ano)) || ((c1.dia > c2.dia) && (c1.mes == c2.mes) && (c1.ano == c2.ano)))
		return false;
	else
		return true;
}
void print(fecha const c1, fecha const c2) {
	std::cout << "fecha 1: " << (c1.dia) << "/" << c1.mes << "/" << c1.ano << std::endl;
}

void main() {
	fecha c1(10, 2, 2010), c2(9, 1, 2018);
	std::cout << (c1 < c2) << std::endl;
	print(c1,c2);
	system("pause");
}