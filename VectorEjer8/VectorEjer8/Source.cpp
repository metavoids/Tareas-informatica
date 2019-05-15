#include <iostream>
using namespace std;
class Vector {
private:
	const int n;
	int i;
	float *real;
public:
	Vector(int num) :n(num),real(NULL),i(0) { real=new float[num]; }
	~Vector() { delete[] real; real = NULL; }
	bool agregar(float real);
	void imprimir() const;
	float media_aritmetica();
	void ordenar();
};

bool Vector::agregar(float r)
{
	if (i<n) {
		real[i] = r;
		i++;
		return true;	
	}
	else
	return false;
}
void Vector::imprimir() const {
	for (int j = 0; j < i; j++)
		cout << real[j] << endl;
}

float Vector::media_aritmetica()
{
	float media=0;
	for (int j = 0; j < i; j++)
		media += real[j];
	media /= i;
	return media;
}

void Vector::ordenar()
{
	float temp;
	int k = 0;
	for (k; k < i; k++) {
		for (int j = k; j < i; j++) {
			if (real[k] > real[j]) {
				temp = real[k];
				real[k] = real[j];
				real[j] = temp;
				k = 0;
			}
		}
	}
}

void main() {
	Vector v(6);
	v.agregar(2.3);
	v.agregar(3.3);
	v.agregar(1.3);
	v.agregar(4.3);
	v.agregar(0.1);
	v.agregar(11);
	v.agregar(20);
	v.imprimir();
	cout <<endl<< v.media_aritmetica() << endl<<endl;
	v.ordenar();
	v.imprimir();
	system("pause");
}

