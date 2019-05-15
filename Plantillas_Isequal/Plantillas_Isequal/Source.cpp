#include <iostream>
using namespace std;


template <class T> bool isEqual(T a, T b) {
	return (a == b) ? 1 : 0;
}
bool isEqual(double a, double b) {
	return (abs(a - b) <= 0.1) ? 1 : 0;
}
void main() {
	double a = 3.18, b = 3.19;
	float c = 3.1, d = 3;
	if (isEqual(a, b))
		cout << "son iguales" << endl;
	if (isEqual(c, d))
		cout << "son iguales" << endl;
	system("pause");
}