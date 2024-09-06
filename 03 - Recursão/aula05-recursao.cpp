#include <iostream>
using namespace std;

int potencia(int base, int expo){
	if (expo == 0)
		return 1;
	return base * potencia(base, expo - 1);
	
}

int main(){
	int x, y;
	cout << "\n x elevado a y \n\n";
	cout << "digite x: " ; cin >> x;
	cout << "digite y: " ; cin >> y;
	cout << "\n" << x << " elevado " << y << " = " << potencia(x, y) << endl;
	return 0;
}