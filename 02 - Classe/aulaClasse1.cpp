#include <iostream>
using namespace std;

class Nada {  //uma classe sempre com�a com class e letra maiuscula

public:       // qlqr pessoa consegue conversar com o atributo

	int i;    //dentro da classe --- variavel � ATRIBUTO 
}; // termina com;

int main(){
	//int i;    //int � um tipo ---- i � uma variavel
	
 	Nada n;   //classe � o tipo ----- n � a variavel
 	
 	n.i = 2;
 	cout << "O valor do inteiro na classe nada  " << n.i << endl;
 	
	
	return 0;
}


//s�o m�todos
//get --- pegar
//set --- configurar