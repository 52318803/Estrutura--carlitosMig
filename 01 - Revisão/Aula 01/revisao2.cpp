#include <iostream>

using namespace std;

int main(){
	int idade;
	float salario;
	double altura;
	char tamanho;
	string nome;
	
	
	cout << "digite idade ";
	cin >> idade;
	
	cout << "digite salario ";
	cin >> salario;
	
	cout << "digite altura ";
	cin >> altura;
	
	cout << "digite tamanho ";
	cin >> tamanho;
	
	cout << "digite seu nome ";
	cin.ignore();
	getline(cin, nome);
	
	cout << "nome " << nome << endl;
	cout << "idade " << idade << endl;
	cout << "pretencao salarial " << salario << endl;
	cout << "altura " << altura << endl;
	cout << "tamanho do uniforme " << tamanho << endl;
	

}