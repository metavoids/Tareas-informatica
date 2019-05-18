#include <iostream>

using namespace std;
class Articulacion {
private:
	double theta;
	double d;
	double a;
	double alpha;
protected:
	double max;
	double min;
public:
	Articulacion(double min, double max) : min(min), max(max), theta(0),d(0),a(0),alpha(0) {};
	virtual char getTipo() = 0;
	void setDH(double, double, double, double);
	virtual void imprime(ostream &os)=0;
};

void Articulacion::setDH(double t, double D, double A, double alp)
{
	theta = t;
	d = D;
	a = A;
	alpha = alp;
}

void Articulacion::imprime(ostream & os)
{
	os << theta << " " << d << " " << a << " " << alpha << "   min:" << min << " max:" << max << endl;
};

class Prismatico : public Articulacion {
protected:
	const char tipo;
public:
	Prismatico(double min, double max) : Articulacion(min, max), tipo('P') {};
	char getTipo() { return tipo; };
	void imprime(ostream &os);

};

void Prismatico::imprime(ostream & os)
{
	os << getTipo();
	Articulacion::imprime(os);
};



class Rotacion : public Articulacion {
protected:
	const char tipo;
public:
	Rotacion(double min, double max) : Articulacion(min, max), tipo('R') {};
	char getTipo() { return tipo; }
	void imprime(ostream &os);
};
void Rotacion::imprime(ostream & os)
{
	os << getTipo();
	Articulacion::imprime(os);
};

class Robot {
private:
	Articulacion *p[10];
	int num;
public:
	Robot() : num(0) {};
	bool operator +=(Articulacion *);
	Articulacion& operator [](int d);
	ostream& operator <<(ostream &os);
	void clean() { delete[] * p; }
};

bool Robot::operator+=(Articulacion *d)
{
	if (num == 10)
	return false;
	else {
		p[num++] = d;
	}
}

Articulacion& Robot::operator[](int d)
{
	return *p[d];
}

ostream& Robot::operator<<(ostream & os)
{
	for (int i = 0; i < num; i++)
		p[i]->imprime(os);
	return os;
}

void main() {
	Robot miRobot;
	miRobot += new Rotacion(-90.0, 90.0);
	
	miRobot[0].setDH(0, 20.0, 10.0, 15.0);
	miRobot += new Prismatico(15.0, 100.0);
	miRobot[1].setDH(90.0, 20.0, 0.0, 0.0);
	miRobot += new Prismatico(10.0, 90.0);
	miRobot[2].setDH(0.0, 10.0, 0.0, 90.0);
	miRobot.operator<<(cout); //Unica linea que imprime// cout << miRobot; da error por alguna razon(
	miRobot.clean();
	system("pause");
	
};