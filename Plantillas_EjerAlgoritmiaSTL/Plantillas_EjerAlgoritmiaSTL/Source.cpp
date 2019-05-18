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
	vector<Punto2D*> v;
	cout << "La capacidad actual es: " << v.size()<<endl;
	v.push_back(&a);
	v.push_back(&b);
	v.push_back(&c);
	v.push_back(&d);
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
	v.erase(v.begin(),v.begin()+v.size());
	for (int i = 0; i < v.size(); i++) { v[i]->print(cout); }
	system("pause");
}