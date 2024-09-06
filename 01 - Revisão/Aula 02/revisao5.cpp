#include <iostream>
using namespace std;

void calculo (float n1, float n2, float *media, float *maior){
	*media = (n1 + n2)/2.0;
	
	if (n1 > n2) *maior = n1;
	
	else         *maior = n2;
}

int main(){
	int nota1 = 9, nota2 = 2;
	float med, maiornota;

	calculo(nota1, nota2, &med, &maiornota);
	cout << "media " << med << "maior nota " << maiornota << endl;


	return 0;
}