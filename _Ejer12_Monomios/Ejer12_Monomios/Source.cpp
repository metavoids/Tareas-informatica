#include <iostream>

using namespace std;
class Monomio { //todos como el mismo literal para hacerlo mas sencillo, "x"
private:
	float coeficiente;
	int grado;
public:
	Monomio(float c, int g) : coeficiente(c), grado(g) {}
	int get_grado() { return grado; }
	int get_coeficiente() { return coeficiente; }
	
	void print() { cout << coeficiente << "x^" << grado << " "; }
};

class Polinomio {
private:
	Monomio **p;
	int num;
public:
	Polinomio(int n) :num(n) { 
		p = new Monomio*[n];
		for (int i = 0; i < n; i++) p[i] = 0; }
	bool push(Monomio &q);
	void print() { for (int i = 0; i < num; i++) p[i]->print(); }
	friend Polinomio& operator +(Polinomio &p1, Polinomio& p2);
	
};

bool Polinomio::push(Monomio& q)
{
	if (p[q.get_grado()]==0) {
		p[q.get_grado()] = &q;
		return true;
		
	}
	else
		return false;
}
Polinomio& operator+(Polinomio& p1, Polinomio& p2)
{
	
	int grado;
	if (p1.num > p2.num)
		grado = p1.num;
	else
		grado = p2.num;
	Polinomio temp(grado);
	for (int i = 0; i < grado; i++) {
		Monomio mtemp(p1.p[i]->get_coeficiente() + p2.p[i]->get_coeficiente(),i);
		temp.push(mtemp); //el problema es que aqui al pasarle esto temporal se destruyo y ya no apunta a nada-----Replantear
		temp.print();
	}
	return temp; //cuidado...
}


void main() {
	Monomio m1(4.0, 0), m2(3.0, 1), m3(5.0, 1), m4(5.0, 2);
	Polinomio p(1);
	Polinomio p2(2);
	Polinomio p3(2);
	p.push(m1);
	p.push(m2);
	p2.push(m1);
	p2.push(m2);
	p2.push(m4);
	p3 = p + p2;
	p3.print();
	system("pause");
}


