#include "listanum.h"

void ListaNum::add_elem(int dato) {
	if (nElem<MAX_ELEM)
	lista[nElem++] = dato;
}

int ListaNum::get_elem(int pos)
{
	if (pos<nElem)
	return lista[pos];
	else return -1;
}

int ListaNum::get_size() {
	return nElem;
}

void ListaNum::print() {
	for (int i = 0; i < nElem; i++)
		cout << lista[i] << " ";

}