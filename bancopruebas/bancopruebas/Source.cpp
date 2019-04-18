#include <iostream>
#include <time.h>

//using namespace std;
//int** reservar(int n,int m) {
//	int(**p) = new int*[n];
//	for (int i = 0; i < n; i++)
//		p[i] = new int[m];
//	return p;
//}
//void borrar(int **p, int n) {
//	for (int i = 0; i < n; i++) {
//		delete[] p[i];
//	}
//	delete[] p;
//	p = NULL;
//}
//void main() {
//	int n, m;
//	cin >> n >> m;
//	int **p;
//	p = reservar(n, m);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			p[i][j] = 1;
//			cout << p[i][j] << " ";
//		}
//		cout << endl;
//	}
//	borrar(p, n);
//	system("pause");
//}
class pareja {
private:
	int a, b;
public:
	pareja(int a2, int b2) : a(a2), b(b2) {}
	void imprimir() {
		std::cout << a<<" "<<b<<std::endl;
	}
	pareja(const pareja &p) :a(p.a), b(p.b) {}
};

void main(){
	pareja p1(12, 31);
	p1.imprimir();
	pareja p2(p1); //Uso del constructor de copia 
	p2.imprimir();
	system("pause");
	}