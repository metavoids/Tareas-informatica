#include "listanum.h"
#include <sstream>
template <typename T>
 T ListaNum<T>::at(int pos)
{
	return lista[pos];
	
}
 template <typename T>
typename ListaNum<T>::npos ListaNum<T>::find(T elem)
{
	for (int i = 0; i < nElem; i++) {
		if (lista[i] == elem) return i;
	}
	return static_cast <ListaNum::npos> (EMPTY_POS);
}
template <typename T>
void ListaNum<T>::push_back(T dato) {
	lista[nElem++] = dato;
}
