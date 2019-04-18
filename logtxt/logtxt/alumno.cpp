#include "alumno.h"

void alumno::obtener(alumno &p1)
{
	do {
		cin.clear();
		cout << "introduzca en el siguiente formato: Nombre Asignatura Matricula Grupo" << endl;
		cin >> p1.nombre >> p1.asignatura >> p1.matricula >> p1.grupo;
		fflush(stdin);
	} while (!cin);
	
}

int alumno::to_file(string filename, const alumno & str)
{
	string comprobar;
	fstream f(filename);
	getline(f, comprobar);
	comprobar[0] = static_cast<int>(comprobar[0]) + 1;
	f.seekg(0, ios::beg);
	f << comprobar[0];
	cout << comprobar[0] << endl;
	f.seekg(0, ios::end);
	f << "Nombre:" << str.nombre << endl << "Asignatura:" << str.asignatura << endl << "Matricula:" << str.matricula << endl << "Grupo:" << str.grupo << endl<<endl;
	f.close();
	return 0;
}
int alumno::read_alumno(string filename, alumno& p1) {
	string str;
	ifstream f(filename, fstream::in);
	for (int i = 0; i < 8; i++)
	{
		f >> str;
		cout << str<<endl;
	}
	f.close();
	return 0;
}

void alumno::inicializar_txt(string filename) {
	fstream f(filename, fstream::out);
	f << "0"<<endl;
	f.close();
}
