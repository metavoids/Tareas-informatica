#include <iostream>
#include <vector>
#define MAX 10
using namespace std;
class Punto2D {
public:
	int x;
	int y;
public:
	Punto2D(int x, int y) : x(x), y(y) {}
	ostream& print(ostream & o) { o << x << " " << y << endl; return o; }
};

void main() {
	Punto2D a(1, 1), b(2, 3), c(5, 5), d(-1, -1);
	vector<Punto2D*> v(4);
	cout << "La capacidad actual es: " << v.size();
	v[0] = &a;
	v[1] = &b;
	v[2] = &c;
	v[3] = &d;
	for (int i = 0; i < v.size(); i++){
		Punto2D *temp;
		for (int j = 0; j < v.size(); j++) {
			if (v[i]->x < v[j]->x) {
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
	for (int i = 0; i < v.size(); i++) { v[i]->print(cout); }
	cout << endl;
	for (int i = 0; i < v.size(); i++) { v[i]=0; }
	for (int i = 0; i < v.size(); i++) { v[i]->print(cout); }
	system("pause");
}