#include <iostream>
using namespace std;

int main(){
	int num[] = {2,8,9};
	
	int *numeros;
	numeros = new int(3);
	
	numeros[0] = -1;
	numeros[1] = -2;
	numeros[2] = -3;
	
	int i;
	
	cout << "listagem do vetor num  " << endl;
	for(i = 0; i < 3; i++)
		cout << num[i] << ", ";
	cout << endl;
	
	
	cout << "listagem do vetor numeros  " << endl;
	for(i = 0; i < 3; i++)
		cout << numeros[i] << ", ";
	cout << endl;


	cout << "listagem do *numeros  " << endl;
	for(i = 0; i < 3; i++)
		cout << *(numeros + i) << ", ";
	cout << endl;	
	
	cout << "numeros [0]  " << numeros[0] << endl;
	numeros++;
	
	cout << "numeros [0]  " << numeros[0] << endl;
	numeros++;
	
	}
