#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string str("Hello Unierse!");
	string start = str.substr(0, 7);
	string end = str.substr(6);
	cout << start << endl;
	cout << end << endl;
	
	size_t pos = str.find("Universe", 8, 2);
	cout << "longitud: " << pos;
	system("pause");
}