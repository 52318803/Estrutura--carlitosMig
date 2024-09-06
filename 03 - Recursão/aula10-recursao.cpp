#include <iostream>
using namespace std;


bool ehPalindromo(string str, int inicio, int fim){
	if (inicio >= fim)
		return true;
	
	if (str[inicio] != str[fim])
		return false;
		
	return ehPalindromo(str, inicio=1, fim-1);
	
}


int mmain(){
	string txt = "nathy";
	if (ehPalindromo(txt, 0, txt.length()-1))
		cout << txt << "eh palindromo" << endl;
		
	else 
		cout << txt << "nn é" << endl;
	
	return 0;
}