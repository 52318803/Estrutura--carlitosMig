#include <iostream>
using namespace std;

void somaDoisInt(int v1 = 2, int v2 = 3, int *soma, float *media){
	*soma = v1 + v2;
	*media = (float)soma/2;
}

int main(){
	int ss;
	float med;
	
	somaDoisInt(27, 89, &ss, &med);
	cout << "Resultados " << ss << "Media " << med << endl;
	
	somaDoisInt(5, -1, &ss, &med);
	cout << "Resultados " << ss << "Media " << med << endl;
	
}