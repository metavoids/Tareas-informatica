#include <iostream>
using namespace std;
class colorRGB
{
	float r, g, b;
public:
	colorRGB(float mr, float mg, float mb) { setColor(mr, mg, mb); }
	void setColor(float mr, float mg, float mb) {
		if (mr > 1.0f)mr = 1.0f;
		if (mg > 1.0f)mg = 1.0f;
		if (mb > 1.0f)mb = 1.0f;
		if (mr < 0.0f)mr = 0.0f;
		if (mg < 0.0f)mg = 0.0f;
		if (mb < 0.0f)mb = 0.0f;
		r = mr; g = mg; b = mb;
	}
	void getColor(float &mr, float &mg, float&mb) { mr = r; mg = g; mb = b; }
};

class objetoGeometrico {
private:
	colorRGB color;
public:
	objetoGeometrico() : color(0, 0, 0) {}
	virtual void pedir()=0;
	virtual void imprimir()=0;
	virtual double area()=0;
	void setColor(colorRGB c) { color = c; }
	colorRGB getColor() { return color; }

};
class Circulo : public objetoGeometrico {
private:
	float radio;
public:
	
	virtual void pedir();
	virtual void imprimir(); 
	virtual double area();

};
void Circulo::pedir()
{
	float r, g, b;
	cout << "Introduzca el radio: \n";
	cin >> radio;
	cout << "Introduzca el R: \n";
	cin >> r;
	cout << "Introduzca el G:\n ";
	cin >> g;
	cout << "Introduzca el B:\n ";
	cin >> b;
	setColor(colorRGB(r,g,b));
}

void Circulo::imprimir()
{
	float r, g, b;
	getColor().getColor(r, g, b);
	cout << "\nCirculo de radio:" << radio << endl << "Color-> R:" << r<<" G:" <<g<<" B:"<<b;
	
}

double Circulo::area()
{
	return (3.1415*radio*radio);
}

class Cuadrado : public objetoGeometrico {
private:
	float lado;
public:
	virtual void pedir();
	virtual void imprimir();
	virtual double area();

};
void Cuadrado::pedir()
{
	float r, g, b;
	cout << "Introduzca el lado: \n";
	cin >> lado;
	cout << "Introduzca el R: \n";
	cin >> r;
	cout << "Introduzca el G:\n ";
	cin >> g;
	cout << "Introduzca el B:\n ";
	cin >> b;
	setColor(colorRGB(r, g, b));
}

void Cuadrado::imprimir()
{
	float r, g, b;
	getColor().getColor(r, g, b);
	cout << "\nCuadrado de lado: " << lado << endl << "Color-> R:" << r << " G:" << g << " B:" << b;

}
double Cuadrado::area()
{
	return (lado*lado);
}

class Triangulo : public objetoGeometrico {
private:
	float base;
	float altura;
public:
	virtual void pedir();
	virtual void imprimir();
	virtual double area();

};

void Triangulo::pedir()
{
	float r, g, b;
	cout << "Introduzca el base: \n";
	cin >> base;
	cout << "Introduzca el altura: \n";
	cin >> altura;
	cout << "Introduzca el R: \n";
	cin >> r;
	cout << "Introduzca el G:\n ";
	cin >> g;
	cout << "Introduzca el B:\n ";
	cin >> b;
	setColor(colorRGB(r, g, b));
}

void Triangulo::imprimir()
{
	float r, g, b;
	getColor().getColor(r, g, b);
	cout << "\nTriangulo de base y altura:" << base<<" " <<altura << endl << "Color-> R:" << r << " G:" << g << " B:" << b;

}
double Triangulo::area()
{
	return (base*altura/2);
}


void main()
{
	objetoGeometrico *lista[100];
	int num = 0, sel = 0;
	while ((sel != 4) && (num < 100)) {
		cout << "\n1. - Circulo\n2. - Cuadrado";
		cout << "\n3. - Triangulo\n4. - Salir"<<endl;
			cin >> sel;
		switch (sel) {
		case 1: lista[num] = new Circulo; break;
		case 2: lista[num] = new Cuadrado; break;
		case 3: lista[num] = new Triangulo; break;
		case 4: cout << "Se imprimira ahora la informacion" << endl;
			break;
		default: cout << "Selección Errónea" << endl;
		}
		if ((sel > 0) && (sel < 4))lista[num++]->pedir();
	}
	double area = 0;
	for (int i = 0; i < num; i++) {
		lista[i]->imprimir();
		area += lista[i]->area();
	}
	cout << "Area Total:" << area;
	system("pause");
}


