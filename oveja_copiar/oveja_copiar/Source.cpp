#include <iostream>
using namespace std;
class oveja {
	int nP;
	int* patas;
public:
	oveja(int nPatas) :nP(nPatas) { 
		patas = new int[nP]; 
		for (int i= 0; i < nP; i++)
			patas[i] = 0;
	}
	~oveja() { delete[] patas; }
	int get_patas() { return nP; }
	//prototipo constrcutor
	oveja(const oveja& m);
};
//constructor copia, si no da el error de que al destruirse la segunda oveja apunta a una direccion destruida
oveja::oveja(const oveja& m){
	//deep copy of the arrays patas
	this->nP = m.nP;
	this->patas = new int[this->nP];
	for (int i = 0; i < nP; i++)
		this->patas[i] = m.patas[i];
		
}

void main() {
	oveja oveja_mutante(3);
	oveja oveja_mutante2(oveja_mutante);//al copiarse una en otra tambien se copian las direcciones, por eso si no haces nada el puntero al destruirse el oveja1 apunta a algo destruido y da error. Por eso hacemos el constructor copia con punteros
	/*oveja o1;
	oveja o2(o1);
	cout << o2.get_patas() << endl;*/
	system("pause");
}