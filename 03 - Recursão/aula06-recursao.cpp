#include <iostream>
using namespace std;

int somaInteiro(int n){
	
	if (n == 0)
		return 0;
	else 
		return n + somaInteiro(n-1);
}

int main(){
	cout << "somatoria de 2 = " << somaInteiro(2) << endl;
	return 0;
}