#include <iostream>
int& foo(int &a, int &b) {
	a += b;
	return a;
}
void main() {
	int a = 3; int b = 5;
	foo(a, b) + 25;
	printf("la suma es: %d\n", a);
	foo(a, b) += 25;
	printf("la suma es: %d\n", a);
	foo(a, b) + foo(a, b);
	printf("la suma es: %d\n", a);
	printf("la suma es: %d\n", foo(a,b)+foo(a,b));
	system("pause");
}