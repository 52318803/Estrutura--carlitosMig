#include <iostream>
using namespace std;

class Nada {  //uma classe sempre comça com class e letra maiuscula

private:       
	int i;    //eu sou o this 
	
public:
	void setI(int ii){this->i = ii;}   //
	int getI() {return i;}             //
	  
}; 

int main(){
		
 	//Nada n;  
 	Nada *n;
	 
	  
 	//n.setI(2); //uso pra modificar o i q é privado
 	n->setI(2); //uso pra modificar o i q é privado
 	
 	
 	//cout << "O valor do inteiro na classe nada  " << n.getI() << endl;
 	cout << "O valor do inteiro na classe nada  " << n->getI() << endl;
 	
	
	return 0;
}


//se é ponteiro, onde tem ponto -- vira seta