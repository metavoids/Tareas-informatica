#include <iostream>
enum { CRUZ, ESTRELLA, CIRCULO };
enum{ AZUL,BLANCO,NEGRO};
class ObjetoPunto {
private:
	int id;
public:
	int get_id() { return id; }
	ObjetoPunto(int id): id(id){}
};

class Punto : public ObjetoPunto {
protected:
	float x;
	float y;
public:
	void print() { std::cout << x <<" "<< y << "id:" << get_id(); }
	Punto(float x, float y, int id) : x(x), y(y), ObjetoPunto(id) {};
	void operator=(Punto&);
};

class PuntoCol:public Punto{
private:
	int col;
public:
	PuntoCol(float x, float y, int id, int col) : Punto(x,y,id), col(col){}
	void print() { std::cout << x << " " << y << "id:" << get_id() << " " << col; }
	void operator=(PuntoCol&);
};
void main() {
	PuntoCol p(5, 5, CIRCULO,1);
	PuntoCol p1(10, 10, CIRCULO, NEGRO);
	p.Punto::print();
	p = p1;
	p.print();
	system("pause");
}

void Punto::operator=(Punto &p)
{
	x = p.x;
	y = p.y;
}

void PuntoCol::operator=(PuntoCol &p)
{
	col = p.col;
	Punto::operator=(p);
}
