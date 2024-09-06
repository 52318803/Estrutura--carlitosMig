#include <iostream>
using namespace std;

class Nada {  //uma classe sempre comça com class e letra maiuscula

public:       // qlqr pessoa consegue conversar com o atributo

	int i;    //dentro da classe --- variavel é ATRIBUTO 
}; // termina com;

int main(){
	//int i;    //int é um tipo ---- i é uma variavel
	
 	Nada n;   //classe é o tipo ----- n é a variavel
 	
 	n.i = 2;
 	cout << "O valor do inteiro na classe nada  " << n.i << endl;
 	
	
	return 0;
}


//são métodos
//get --- pegar
//set --- configurar