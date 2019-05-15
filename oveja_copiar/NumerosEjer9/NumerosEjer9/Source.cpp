#include <iostream>
using namespace std;
int valorNumerico(char);
char caracter(int);
class superNumero
{
private:
	int numDigitos;
	char *valores;
public:
	superNumero() :numDigitos(0), valores(NULL) {}
	//metodo para iniciar el numero con una cadena de caracteres
	const superNumero & operator = (const char *);
	const superNumero & operator = (const superNumero &num)
	{
		delete[] valores;
		numDigitos = num.numDigitos;
		if (numDigitos == 0)
		{
			valores = NULL;
			return *this;
		}
		valores = new char[numDigitos];
		for (int i = 0; i < numDigitos; i++)valores[i] = num.valores[i];
		return *this;
	}
	//operación suma de dos superNumeros
	superNumero operator + (const superNumero &);

	void imprimir()
	{
		for (int i = numDigitos - 1; i >= 0; i--)cout << valores[i];
	}
};

const superNumero & superNumero::operator=(const char * p)
{
	int i = 0, j = 0;
	delete[] valores;
	for (i; p[i] != '\0'; i++);
	numDigitos = i;
	valores = new char[numDigitos];
	for (int i = numDigitos - 1; i >= 0; i--) {
		valores[i] = p[j];
		j++;
	}
	return *this;
	// TODO: insert return statement here
}

superNumero superNumero::operator+(const superNumero &t)
{
	superNumero temp;
	if (numDigitos > t.numDigitos) temp.numDigitos = numDigitos;
	else temp.numDigitos = t.numDigitos;
	for (int i = 0; i < temp.numDigitos; i++) {
		
	}
	return superNumero();
}

void main() {
	superNumero t;
	superNumero X;
	t = "30302929";
	cout << caracter(7);
	system("pause");
	

}

int valorNumerico(char a)
{
	int ia = a - '0';
	return ia;
}

char caracter(int i)
{
	char a=i;
	return a;
}
