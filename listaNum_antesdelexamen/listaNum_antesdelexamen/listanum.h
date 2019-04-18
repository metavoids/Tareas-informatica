#pragma once
#include <iostream>
#define MAX_ELEM 100
using namespace std;
class ListaNum {
private:
	int nElem;
	int lista[MAX_ELEM];
public:
	void add_elem(int dato);
	int get_elem(int pos);
	int get_size();
	void print();
	ListaNum() : nElem(0){}
};

class B{
public:
	B() { cout << "llamando al constructor de B sin argumentos" << endl; }
	B(const B&) { cout << "llamando al constructor copia de B" << endl; }
};

class A {
	B b;
public:
	A() { cout << "llamando la constructor de A sin argumentos" << endl; }
	A(const A& a) : b(a.b) { cout << "llamando al constructor copia de A" << endl; }
};