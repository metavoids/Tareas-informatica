#include "listanum.h"
#include <iostream>

void ListaNum::add_elem(int dato)
{
	nElem += 1;
	lista[nElem] = dato;
}

int ListaNum::get_elem(int pos)
{
	return lista[pos];
}

int ListaNum::get_size()
{
	return nElem;
}

void ListaNum::print()
{
	for(int i = 0; i < nElem; i++)
		std::cout << lista[i] << " ";
}

ListaNum::ListaNum() {
	nElem = 0;
}