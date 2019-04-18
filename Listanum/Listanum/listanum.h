#pragma once
#define MAX_ELEM 100
class ListaNum{
private:
int nElem;
int lista[MAX_ELEM];
public:
 void add_elem (int dato);
 int get_elem (int pos);
 int get_size();
 void print();
};
