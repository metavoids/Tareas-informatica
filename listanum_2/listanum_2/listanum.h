#pragma once
#define MAX_ELEM 100
#include <string>
#include <iostream>

using namespace std;
template <typename T>
class ListaNum {
public:
	enum { EMPTY_POS = 0xFFFFFF };//una posicion no existente
	typedef size_t npos; //tipo para índices
private:
	int nElem;
	T lista[MAX_ELEM];
public:
	//constructor apropiado…
	void push_back(T dato);
	T at(int pos);
	npos find(T elem);
	size_t size(); //nomenclatura típica
	void clear();
	//I/O
	string to_string();
	ostream& print(ostream&);
};