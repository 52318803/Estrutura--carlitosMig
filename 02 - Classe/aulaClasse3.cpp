#include <iostream>
using namespace std;

class Nada {  //uma classe sempre comça com class e letra maiuscula

private:       
	int i;    //eu sou o this 
	
public:
	Nada() {cout << "eu sou construtor" << endl;}

	~Nada() {cout << "morri" << endl;}

	void setI(int ii){this->i = ii;}   //
	int getI() {return i;}             //
	  
}; 

int main(){
		
 	Nada *n = new Nada();  
 	
 	Nada *tudoParaVoce;
 		
 	n->setI(2);
 	
 	cout << "O valor do inteiro na classe nada  " << n->getI() << endl;
 	
 	tudoParaVoce = new Nada();
 	
 	delete(n);
 	
	tudoParaVoce->setI(123);
	
	cout << "O valor do inteiro na classe nada  " << tudoParaVoce->getI() << endl;
	
	delete(tudoParaVoce);
}


//se é ponteiro, onde tem ponto -- vira seta