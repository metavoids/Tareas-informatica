#include <iostream>

void main() {
	std::cout << "Introduzca tres sumandos separados por un espacio:" << std::endl;
	int a, b, c;
	if (std::cin >> a >> b >> c) { //si le pones algo qu eno sea un int, si el flujo es falso, no funciona
		std::cout << "la suma es:" << a + b + c << std::endl;
	}
	else
		std::cout << "dont lie\n";
	system("pause");
}