#include <iostream>
#include <string>
using namespace std;
void extraer(string str, string &nombre) {
	size_t pos = str.find_first_of("/");
	while (pos != std::string::npos) {
		pos = str.find_first_of("/", pos + 1);
	}
	nombre = str.substr(pos);

}
int main() {
	string nombre;
	string str = "/home/pss/graphs/brock200_1.clq";
	extraer(str, nombre);
	cout << nombre << endl;
	system("pause");
}