#include <iostream>
using namespace std;

class Vehiculo {
public:
	virtual void print() const = 0;
};
//definición de función virtual pura
inline void Vehiculo::print()const {
	cout << "soy un vehiculo" << endl;
}
class Coche :public Vehiculo {
public:
	virtual void print() const {
		cout << "soy un coche" << endl;
	}
};
class Avion {
public:
	virtual int volar() = 0;
};
class Airbus :public Avion {
public:
	int volar() {
		cout << "vuelo como Airbus generico" << endl;
		return 0;
	}
};
class Airbus303 : public Airbus {
public:
	//Línea de desarrollo interrumpida
	//En este momento se desconoce la forma
	//de volar de este modelo
};

int main() {
	Coche myc;
	myc.print();
	//llamada a función por defecto
	myc.Vehiculo::print();
	system("pause");
}