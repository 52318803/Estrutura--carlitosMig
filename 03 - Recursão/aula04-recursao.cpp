#include <iostream>
using namespace std;

int potencia(int base, int expo){
	int res = 1;
	for (int i = 0; i < expo; i++)
		res *= base;
	return res;
	
}

int main(){
	int x, y;
	cout << "\n x elevado a y \n\n";
	cout << "digite x: " ; cin >> x;
	cout << "digite y: " ; cin >> y;
	cout << "\n" << x << " elevado " << y << " = " << potencia(x, y) << endl;
	return 0;
}