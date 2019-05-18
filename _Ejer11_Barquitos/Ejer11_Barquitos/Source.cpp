#include <iostream>
using namespace std;
enum Orientacion { HORIZONTAL, VERTICAL };
enum Efecto { AGUA, TOCADO, HUNDIDO };
class Barco
{
protected:
	int x, y;
	Orientacion ori;
	int longitud;
	bool *cuadrados;
	int vida;
public:
	Barco(int num, int cx, int cy, Orientacion o) :
		longitud(num), x(cx), y(cy), ori (o) {
		if (longitud < 1)longitud = 1;
		cuadrados = new bool[longitud];
		for (int i = 0; i < longitud; i++)cuadrados[i] = true;
		vida = longitud;
	}
	Efecto impacto(int cx, int cy);
	bool muerto();
	virtual void imprimeNombre() = 0;
	static void imprimeEfecto(Efecto e);
	virtual ~Barco() { delete[] cuadrados; cuadrados == NULL; }
};

class Destructor : public Barco {
public:
	Destructor(int cx, int cy, Orientacion o):Barco(3,cx,cy,o){}
	void imprimeNombre() { cout << "Destructor" << endl; }
	~Destructor() {}
};
class Patrullera : public Barco {
public:
	Patrullera(int cx, int cy, Orientacion o) :Barco(2, cx, cy, o) {}
	void imprimeNombre() { cout << "Patrullera" << endl; }
	~Patrullera() {}
};
class PortaAviones : public Barco {
public:
	PortaAviones(int cx, int cy, Orientacion o) :Barco(4, cx, cy, o) {}
	void imprimeNombre() { cout << "Portaaviones" << endl; }
	~PortaAviones() {}
};

//////////////////////////////////////////////////////
Efecto Barco::impacto(int cx, int cy)
{
	bool tocado=false;
	switch (ori) {
	case (HORIZONTAL):
	{bool coord_x = false;
	for (int i = 0; i < longitud; i++)
		if (cx == x + i)
			coord_x = true;
	if (coord_x && cy == y) {
		vida--;
		tocado = true;
	}
	if (vida == 0 && tocado) return HUNDIDO;
	if (vida > 0 && tocado) return TOCADO;
	if (!tocado) return AGUA; }
		break;
	case (VERTICAL):
	{bool coord_y = false;
	for (int i = 0; i < longitud; i++)
		if (cy == y + i)
			coord_y = true;
	if (coord_y && cx == x) {
		vida--;
		tocado = true;
	}
	if (vida == 0 && tocado) return HUNDIDO;
	if (vida > 0 && tocado) return TOCADO;
	if (!tocado) return AGUA; }
		break;
	}
}
bool Barco::muerto()
{
	if (vida == 0) {
		return true;
		Barco::~Barco();
	}

	else
	return false;
}
void Barco::imprimeEfecto(Efecto e)
{
	switch (e) {
	case(AGUA):
		cout << "AGUAA" << endl;
		break;
	case(TOCADO):
		cout << "Tocado" << endl;
		break;
	case(HUNDIDO):
		cout << "Hundido" << endl;
		break;
	}
}





void main()
{
	Barco *barcos[3];
	bool flag = true;
	int i, cx, cy;
	barcos[0] = new Patrullera(3, 4, VERTICAL);
	barcos[1] = new Destructor(5, 2, HORIZONTAL);
	barcos[2] = new PortaAviones(1, 1, VERTICAL);
	while (flag) {
		cout << "\nIntroduzca coordenadas:";
		cin >> cx >> cy;
		Efecto res = AGUA;
		bool impactoAlgo = false;
		for (i = 0; i < 3; i++) {
			res = barcos[i]->impacto(cx, cy);
			if (res != AGUA) {
				barcos[i]->imprimeNombre();
				Barco::imprimeEfecto(res);
				impactoAlgo = true;
			}
		}
		if (!impactoAlgo)Barco::imprimeEfecto(AGUA);
		flag = false;
		for (i = 0; i < 3; i++)if (barcos[i]->muerto() == false)flag = true;
		fflush(stdin);
	}
	cout << "\n ¡¡POR FIN!!";
	//CODIGO A COMPLETAR POR EL ALUMNO EN EL APARTADO 5
	//…………………….
	delete[] *barcos;
	system("pause");
	//FIN DE CODIGO A COMPLETAR
}


