#include <iostream>
using namespace std;


void imprime(int n){
	if (n!=0){
		cout << n << ", ";
		imprime(n-1);
	}
}

int main(){
	imprime(3);
	return 0;
}