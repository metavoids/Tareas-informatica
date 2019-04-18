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
	int to_file(string filename, const alumno& str);	int read_alumno(string filename, alumno& p1);
	void inicializar_txt(string filename);
};