#pragma once
class fecha {
private:
	int dia;
	int mes;
	int año;
public:
	bool operator < (fecha primera, fecha segunda);

};
