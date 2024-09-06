#include <iostream>
using namespace std;

int main(){
	int idade;
	int *ponteiro;
	
	idade = 2;
	ponteiro = &idade;
	
	cout << "valor da variavel idade   " << idade << endl;
	cout << "valor da variavel ponteiro   " << ponteiro << endl;
	cout << "valor da variavel *ponteiro   " << *ponteiro << endl;
	
	idade++;    /////
	cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "idade++  " << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;
	
	cout << "valor da variavel idade   " << idade << endl;
	cout << "valor da variavel ponteiro   " << ponteiro << endl;
	cout << "valor da variavel *ponteiro   " << *ponteiro << endl;
	
	*ponteiro;  /////
	cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "*puteiro = 333  " << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;
	
	cout << "valor da variavel idade   " << idade << endl;
	cout << "valor da variavel ponteiro   " << ponteiro << endl;
	cout << "valor da variavel *ponteiro   " << *ponteiro << endl;
	
	ponteiro++;  /////
	cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "*ponteiro+++ " << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;
	
	cout << "valor da variavel idade   " << idade << endl;
	cout << "valor da variavel ponteiro   " << ponteiro << endl;
	cout << "valor da variavel *ponteiro   " << *ponteiro << endl;
	
	return 0;
}