#include<iostream>
using namespace std;

int k;
float X[5];
float Y[5]; 
float sum;
float sum2;
float promedio;

int main() {

	sum = 0;
	sum2 = 0;
	promedio = 0;

cout << "Ingrese un numero entero: "<<endl; 
cin >> k;
cout << "\n";
cout << "Ingrese nnumeros para X: " << endl;
for (int i = 0; i < k; i++) {
cout << "Numero " << i + 1 << " para X: "<<endl; 
cin >> X[i];
	}
cout << "\n";
cout << "Ingrese numeros para Y: " << endl;
cout << "\n";
	for (int j = 0; j < k; j++) {
	cout << "Numero " << j + 1 << " para Y: "<<endl; 
	cin >> Y[j];
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {
			sum = sum+ X[i] * Y[j];
			sum2 = sum2 + Y[j];
		}
	}
promedio = sum / sum2;
cout << "\n";
cout << "Numeros de X:" << endl;
for (int i = 0; i < k; i++) {
	cout << X[i] << " ";
}
cout << "\n";
cout << "Numeros de Y:" << endl;
	for (int j = 0; j < k; j++) {
		cout << Y[j] << " ";
	}
	cout << "\n";
	cout << "El promedio es: "<<promedio<< endl;
	return 0;
}