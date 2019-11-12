#include<iostream>
using namespace std;

int main() {

	int cantNumeros = 0;
	cout << "Ingrese la cantidad de notas: " << endl;
	cin >> cantNumeros;

	float notas[cantNumeros];
    float ponderaciones[cantNumeros];

float sumaProducto = 0.0, sumaPonderaciones = 0.0;
cout << "Ingrese sus notas y sus ponderaciones: " << endl;
  for (int i = 0; i < cantNumeros; i++) {
	cout << "Ingrese su nota y ponderaciones: " << endl;
	cin >> notas[i];
	sumaProducto = sumaProducto + (notas[i] * ponderaciones[i]);
	sumaPonderaciones = sumaPonderaciones + ponderaciones[i];

	cout<<"El promedio es: "<<sumaProducto / sumaPonderaciones<<endl;
		}
	return 0;
}
