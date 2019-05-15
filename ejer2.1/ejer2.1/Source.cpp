#define MAX_CADENA 100
#define MAX 10
#include <iostream>
using namespace std;
//valores posibles de las cosas
enum TipoCosa { T_complejo, T_libro };
//datos para un complejo
struct Complejo {
	double real;
	double imag;
};
//datos para un libro
struct Libro {
	char Titulo[MAX_CADENA];
	char Autor[MAX_CADENA];
};
//datos para cualquier cosa
struct Cosa {
	TipoCosa tipo;
	union {
		Complejo complejo;
		Libro libro;
	};
};
void Introducir_Libro(Cosa Lista[],int &i, int Contador[]);
void Introducir_Complejo(Cosa Lista[], int &i, int Contador[]);
void Imprimir(Cosa Lista[], int &i, int Contador[]);

void main() {
	Cosa Lista[MAX];
	int Contador[MAX];
	int i=0;
	Introducir_Libro(Lista, i,Contador);
	Introducir_Complejo(Lista, i,Contador);
	Imprimir(Lista, i,Contador);
	system("pause");

}

void Introducir_Libro(Cosa Lista[],int &i, int Contador[])
{
	char opc = 0;
	if (i >= MAX) {
		cout << "MAXIMO ALCANZADO";
	}	
	else
	{
		for (i; i < MAX; i++) {
			cout << "Titulo:";
			cin >> Lista[i].libro.Titulo;
			cout << "Autor:";
			cin >> Lista[i].libro.Autor;
			Contador[i] = T_libro;
			cout << "Si quiere salir pulse x: ";
			cin >> opc;
			if (opc == 'x')
				break;
			fflush(stdin);
		}
	}
}

void Introducir_Complejo(Cosa Lista[], int &i, int Contador[])
{
	char opc = 0;
	if (i >= MAX) {
		cout << "MAXIMO ALCANZADO";
	}
	else
	{
		for (i; i < MAX; i++) {
			cout << "Real:";
			cin >> Lista[i].complejo.real;
			cout << "Imaginario:";
			cin >> Lista[i].complejo.imag;
			Contador[i] = T_complejo;
			cout << "Si quiere salir pulse x: ";
			cin >> opc;
			if (opc == 'x')
				break;
			fflush(stdin);
		}
	}
}

void Imprimir(Cosa Lista[],int &i,int Contador[])
{
	for (int j = i; j >= 0; j--) {
		if (Contador[j]==T_libro) {
			cout << "Titulo: " << Lista[j].libro.Titulo << endl << "Autor: " << Lista[j].libro.Autor<<endl;
		}
		else
			cout << "Real: " << Lista[j].complejo.real << endl << "Imaginario: " << Lista[j].complejo.imag << endl;
	}
	
}
