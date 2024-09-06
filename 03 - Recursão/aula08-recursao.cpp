#include <iostream>
using namespace std;

int tamStr(char *s){
	if (s[0] == '\0')
		return 0;
	return 1 + tamStr(&s[1]);
}

int main(){
	string texto;
	cout << "digite um texto ";
	getline(cin, texto);
	cout << "\n tamanho da string = " << tamStr((char *) texto.c_str()) << endl;
	return 0;										
}