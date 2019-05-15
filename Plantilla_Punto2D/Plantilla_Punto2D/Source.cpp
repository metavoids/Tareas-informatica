#include <iostream>
using namespace std;

template <class T> class Punto {
	T x, y;
public:
	Punto(T x, T y): x(x), y(y) {}
	void print() { cout << "(" << x << ":" << y << ")" << endl; }
};

void main() {
	Punto<int> miPunto(10, 20);
	Punto<float> fPunto(11.4, 20.1);
	fPunto.print();
	miPunto.print();
	system("pause");
}