#include <iostream>
using namespace std;
struct dim_t {
	int n;
	int m;
};
dim_t get_dim() {
	dim_t key_dim;
	do {
		cin.clear(); /* pone a 1 el good del cin. */
		cout << "Introduzca dos numeros por teclado" << endl;

		cin >> key_dim.n >> key_dim.m;
		fflush(stdin); /* limpia la entrada de teclado*/
	} while (!cin); /* sobrecarga del operador ‘!’ */
	return key_dim;
}
void main() {
	dim_t dim;
	dim = get_dim();
	cout << "Las dimensiones son " << dim.n << " x " << dim.m << endl;
	system("pause");
}