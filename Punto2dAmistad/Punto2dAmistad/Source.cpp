#include <iostream>

class Punto2D {
	float x;
	float y;
public:
	Punto2D() : x(0.0), y(0.0) {};
	Punto2D(float l, float r) : x(l), y(r) {};
	~Punto2D() {};
	Punto2D(Punto2D &punto) : x(punto.x), y(punto.y) {};
	float getPunto_x() { return x; }
	float getPunto_y() { return y; }

	friend float dist_origen(Punto2D &point);
	std::ostream & imprimir(std::ostream& o,float a);
};

std::ostream &  Punto2D::imprimir(std::ostream& o,float a)
{
	o << "dato:" << a;
	return o;
}

void main() {
	Punto2D yo(3,5);
	Punto2D yo2(yo);
	yo.imprimir(std::cout, dist_origen(yo));
	system("pause");

}

float dist_origen(Punto2D &point)
{
	float temp;
	temp = point.x*point.x + point.y*point.y;
	temp = sqrt(temp);
	return temp;
}
