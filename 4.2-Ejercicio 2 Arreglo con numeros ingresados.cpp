#include<iostream>
using namespace std;

int c;

int main() {
	cout << "\n\Ingrese una cantidad de numeros " << endl;
	cin >> c;
int cantNum = c;
int numeros[cantNum];
for (int i = 0; i < cantNum; i++) {
cout << "\n\Ingrese la cantidad " << (i + 1) << endl;
cin >> numeros[i];
	}
cout << "\n\Los datos son: " << endl;
for (int i = 0; i < cantNum; i++) {
	cout << numeros[i] << endl;
	}
return 0;
}