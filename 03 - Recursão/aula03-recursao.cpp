#include <iostream>
using namespace std;

int fat(int n){
	
	if (n <= 1)
		return 1;
	return n * fat(n-1);
}


int main(){
	cout << "Fatorial de 3= " << fat(8) << endl;
	cout << "Fatorial de 3= " << fat(6) << endl;
	cout << "Fatorial de 3= " << fat(4) << endl;
	cout << "Fatorial de 3= " << fat(3) << endl;
	cout << "Fatorial de 1= " << fat(1) << endl;
	cout << "Fatorial de 0= " << fat(0) << endl;
}