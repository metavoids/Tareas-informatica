#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class alumno {
private:
	string nombre;
	string asignatura;
	int matricula;
	int grupo;
public:
	void obtener(alumno &p1);
	int to_file(string filename, const alumno& str);
	void inicializar_txt(string filename);
};