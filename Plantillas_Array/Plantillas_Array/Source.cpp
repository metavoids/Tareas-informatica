#include <iostream>
using namespace std;

template<class T, int N> class Array {
	T x[N];
	size_t size;
public:
	Array() :size(0) {}
	void push_back(int dato) {
		if (size < N) {
			x[size++] = dato;
		}
	}
	ostream& print(ostream & o = cout) {
		for (int i = 0; i < size; i++) {
			o << x[i] << " ";
		}
		o << endl;
		return o;
	}
};

void main() {
	Array<int, 5> enteros;
	enteros.push_back(10);
	enteros.push_back(10);
	enteros.push_back(10);
	enteros.push_back(10);
	enteros.push_back(8);
	enteros.push_back(7);// a partir de aqui ha llegado al max
	enteros.push_back(10);
	enteros.print();
	system("pause");
}