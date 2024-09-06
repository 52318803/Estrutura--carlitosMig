
#include "ClassPessoa02.h"
//pega esse arquivo -- recorta e cola aqui"
#include <iostream>
using namespace std;

   //nome da classe + (::)
void Pessoa::setNome(string nome){ this->nome = nome; }	
string Pessoa::getNome(){ return nome; }
	
void Pessoa::setRg(string rg){ this->rg = rg; }
string Pessoa::getRg(){ return rg; }	


int main() {
	
	Pessoa *p = new Pessoa();
	p->setNome("nathynathy");
	p->getRg("493.464.868-21");
	
	cout << "listagem " << endl;
	cout << "nome:   " << p->getNome << endl; 
	cout << "rg:  " << p->getRg << endl; 
	
	delete(p);

}