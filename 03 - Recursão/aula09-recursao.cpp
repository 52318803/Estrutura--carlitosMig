#include <iostream>
using namespace std;


void imprime1(int n){
	if (n!=0){
		cout << n << ", ";
		imprime1(n-1);
	}
}

void imprime2(int n){
	if (n!=0){
		imprime2(n-1);
		cout << n << ", ";
	
	}
}

int main(){
	imprime1(3);
	imprime2(3);
	return 0;
}