#include <iostream>
#include <string>
using namespace std;
void extraer(string str, string &nombre) {
	size_t pos = str.find("/");
	size_t pos_f;
	while (pos != string::npos) {
		pos = str.find("/", pos + 1);
		if (pos < str.size())
			pos_f = pos;
	}
	nombre = str.substr(pos_f);
}
int dect_SO(string str) {
	int SO = 0;
	if (str.find("/")!=string::npos)
		SO = 1;//linux
	else
		SO = 0;
	return SO;
}
int main() {
	string nombre;
	string str = "/home/pss/graphs/brock200_1.clq";
	string str1 = "c:\\pss\\graphs";
	string str2 = "c:\pss\graphs";
	int SO = 0; 
	SO = dect_SO(str1);
	if (SO == 1)
		str1 += '/' ;
	else
		str1 += '\\' ;
	cout << SO << endl;
	cout << str1 << endl;

	system("pause");
}