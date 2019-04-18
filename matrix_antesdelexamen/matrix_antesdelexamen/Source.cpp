#include <iostream>
using namespace std;
class matrix {
private:
	int n;
	int m;
	int **p;
public:
	matrix(int a, int b) : n(a), m(b) {};
	void guardarmemoria();
	void matriz_unitaria();
	void print() const;
	void eliminar();
};

void matrix::guardarmemoria() {
	p = new int*[n];
	for (int i = 0; i < n; i++)
		p[i] = new int[m];
}

void matrix::matriz_unitaria() {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (j==i)
				p[i][j] = 1;
			else
				p[i][j] = 0;
		}
	}
}

void matrix::print() const {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
}
void matrix::eliminar() {
	for (int i = 0; i < n; i++) {
		delete[] p[i];
	}
	delete[] p;
}

void main() {
	matrix p1(3, 10);
	p1.guardarmemoria();
	p1.matriz_unitaria();
	p1.print();
	p1.eliminar();
	system("pause");
}