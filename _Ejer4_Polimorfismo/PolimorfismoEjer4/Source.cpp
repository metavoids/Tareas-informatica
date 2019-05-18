
#include <iostream>
#define MAX 100
using namespace std;
class Dinero {
public:
	virtual void getValor() =0;
};
class Moneda :public Dinero {
private:
	float valor;
public:
	Moneda(float v) : valor(v) {};
	void getValor() { cout << "Moneda de valor " << valor << "€" << endl; }
};
class Billete :public Dinero {
private:
	int valor;
public:
	Billete(int v) : valor(v) {};
	void getValor() { cout << "Billete de valor " << valor << "€" << endl; }
};
class Hucha {
private:
	Dinero **p; // -----> esto guarda un array de punteros (lo de ahora es un simple array)
	int num;
public:
	Hucha() :num(0), p(new Dinero*[MAX]) {}; //p(new Dinero*[MAX])
	~Hucha() { delete[] *p; delete p; }
	void imprimeContenido();
	void operator+=(Dinero *d);
};

void Hucha::imprimeContenido()
{
	for (int i = 0; i < num; i++)
		p[i]->getValor();
}
void Hucha::operator+=(Dinero * d)
{
	p[num++] = d;
}
void main()
{
	Hucha cerdito;
	cerdito += new Billete(10);
	cerdito += new Moneda(0.20);
	cerdito += new Billete(100);
	cerdito.imprimeContenido();
	system("pause");
}
