#include <iostream>
using namespace std;
void main() {
	
	cout << 'A' << endl;
	cout << static_cast<int>('A') << endl; //conversi�n expl�cita
	cout << 5.70 << endl;
	cout << static_cast<int>(5.70) << endl; //conversi�n expl�cita
	cout << 100.54 << endl;
	cout << dynamic_cast<int>(100.54) << endl;
	system("pause");
}