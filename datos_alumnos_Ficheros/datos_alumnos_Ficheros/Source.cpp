#include <iostream>
#include <sstream>
#include <fstream>
#include <string>


struct alumno {
	std::string nombre;
	std::string asignatura;
	int id_mat;
	int id_grupo;
};

namespace A309 {
	//////////////interfaz publico
	std::string to_string(const alumno&);
	int read_alumno(alumno&);
	int to_file(std::string, const alumno&);
	int from_file(std::string , alumno&);


	///////////////deficiones
	std::string to_string(const alumno& a) {
		std::string res;
		//formato nombre
		std::string nombre = "nombre:";
		nombre += a.nombre;
		nombre+= "\n";
		//formato asignatura
		std::string asignatura = "asignatura:";
		asignatura += a.asignatura;
		asignatura += "\n";
		//formato matricula
		std::string matricula="matricula:";
		std::stringstream sstr; //no puedo hacer lo de antes ya que es no es un string, stringstream es para entradas y salidas
		sstr << a.id_mat; //asi que hay que cargarlo en un flujo tipo stream que permita entrada y salida como stringstream sstr
		matricula += sstr.str();// eso te saca la informacion del flujo ese, si no pusieras lo de str no puedes sacar de un flujo la informacion sin mas
		matricula += "\n";
		// grupo
		std::string grupo = "grupo:";
		std::stringstream sstr_grupo;
		sstr_grupo << a.id_grupo;
		grupo += sstr_grupo.str();
		grupo += "\n";
		//final
		res += nombre;
		res += asignatura;
		res += matricula;
		res += grupo;


		return res;
	}

	void clear_alumno(alumno& a) {
		a.nombre = "";
		a.asignatura = "";
		a.id_mat = 0;
		a.id_grupo = 0;
	}

	int read_alumno(alumno& a) {
		clear_alumno(a);
		do {
			std::cin.clear(); /* limpia el estado */
			std::cout << "Introduzca datos <N> <A> <id_mat> <id_group>" << std::endl;
			std::cin >> a.nombre >> a.asignatura >> a.id_mat >> a.id_grupo;
			fflush(stdin); /* limpia la entrada de teclado*/
		} while (!std::cin); /* sobrecarga del operador ‘!’ */
		return 0;
	}
	int to_file(std::string filename, const alumno& str) {
		std::ofstream f(filename, std::ofstream::out);
		if (f.is_open())
		{
			f << "Nombre: " << str.nombre << std::endl;
			f << "Asignatura: " << str.asignatura << std::endl;
			f << "Matricula: " << str.id_mat << std::endl;
			f << "Grupo: " << str.id_grupo << std::endl;
			f.close();
			return 0;
		}
		else
			return 1;
	}
	
}
int unit_test_to_string() {
	alumno a;
	a.nombre = "jonathan";
	a.asignatura = "fisica 2";
	a.id_mat = 53394;
	a.id_grupo = 3;
	std::cout << A309::to_string(a);
	return 0;
}
int unit_test_read_string() {
	alumno a;
	int correcto;
	std::string filename = "log.txt";
	A309::read_alumno(a);
	std::cout << A309::to_string(a);
	correcto=A309::to_file(filename, a);
	return correcto;
}


void main() {
	alumno a;
	if (unit_test_read_string() != 0) {
		std::cout << "ERROR";
	}
	system("pause");

}