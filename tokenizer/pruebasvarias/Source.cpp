#include <iostream>
#include <string>
using namespace std;
string *tokenizer(string& str, string*tokens) {
	int i = 0, old_pos = 0;
	size_t pos = str.find_first_of(" ");
	while (pos!=string::npos) {
		old_pos = pos + 1;
		pos = str.find(" ", pos + 1);
	}
	return tokens;
}
	int main() {
		string str, *tokens;
		cout << "Enter text to convert to tokenize: ";
		getline(cin, str);
		tokens = tokenizer(str, tokens);
	system("pause");
}