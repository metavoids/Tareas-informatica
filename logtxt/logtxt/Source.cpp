
#include <string>
#include "alumno.h"

void main() {
	alumno p1;
	p1.obtener(p1);
	//p1.inicializar_txt("log.txt");
	p1.to_file("log.txt", p1);
	//p1.read_alumno("log.txt",p1);
	system("pause");
}