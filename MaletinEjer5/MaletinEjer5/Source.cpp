#include <iostream>
enum color{ gris, negro, verde, rojo, azul,amarillo };
const char *enumList[] = { "gris", "negro", "verde", "rojo", "azul" ,"amarillo" };
class objeto{
protected:
	color c;
public:
	objeto(color col) :c(col) {}
	virtual void getValor() = 0;
};
class Pluma : public objeto {
public:
	Pluma(color col) : objeto(col) {};
	void getValor() { std::cout << "Pluma de color " << enumList[c] << std::endl; }
};
class Agenda : public objeto {
public:
	Agenda(color col) : objeto(col) {};
	void getValor() { std::cout << "Agenda de color " << enumList[c] << std::endl; }
};
class Movil : public objeto {
public:
	Movil(color col) : objeto(col) {};
	void getValor() { std::cout << "Movil de color " << enumList[c] << std::endl; }
};
class Maletin {
private:
	objeto *p[10];
	int num;
public:
	Maletin() : num(0) {};
	bool operator +=(objeto *p);
	void mostrarContenido();
	void vaciar() { delete[] * p; num = 0; }
};

bool Maletin::operator+=(objeto * d)
{
	if (num == 10)
		return false;
	else {
		p[num++] = d;
		return true;
	}
}
void Maletin::mostrarContenido()
{
	for (int i = 0; i < num; i++)
		p[i]->getValor();
}
void main()
{
	Maletin mimaletin;
	mimaletin += new Pluma(azul);
	mimaletin += new Agenda(rojo);
	mimaletin += new Movil(negro);
	mimaletin.mostrarContenido();
	mimaletin.vaciar();
	system("pause");
}