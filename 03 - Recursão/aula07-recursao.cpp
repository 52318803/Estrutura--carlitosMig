#include <iostream>
using namespace std;

int tamStr(char *s){
	 int i = 0;
	 while (s[i] != '\0')   //função pra saer qnts caracteres tem numa string
	 	i++;
	return i;
}

int main(){
	string texto;
	cout << "digite um texto ";
	getline(cin, texto);
	cout << "\n tamanho da string = " << tamStr((char *) texto.c_str()) << endl;
	return 0;
}