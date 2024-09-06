
// ESTUDAR PRA UM CARALHO!!!!!!!!!!!!!!!!!!!!!!

#include <iostream>
using namespace std;

class Pessoa{
private:
	string nome;
	string rg;
	
public:
	void setNome(string nome) {this->nome = nome;}	
	string getNome() {return nome;}
	
	void setRg(string rg) {this->rg = rg;}
	string getRg() {return rg;}	
};

int main(){
	Pessoa *p = new Pessoa();
	p->setNome("nathynathy");
	p->setRg("493.464.868-21");
	
	cout << "listagem " << endl;
	cout << "nome:   " << p->getNome << endl; 
	cout << "rg:  " << p->getRg << endl; 
	
	delete(p);
	
}

//ttcreator   pesquisar
//c++builder

//ENTRAR NO COPILOT E PEDIR PRA EXPLICAR LINHA A LINHA