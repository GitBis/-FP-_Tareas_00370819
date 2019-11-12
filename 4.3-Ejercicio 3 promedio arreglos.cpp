#include<iostream>
using namespace std;

float cant;
float sumar;
float promedio;



int main() {
	
	sumar = 0;

	cout << "\n\Ingrese la cantidad a promediar: " << endl;
	cin >> cant;

	int canArreglo = cant;
	float datos[canArreglo]; 

	for (int i = 0; i < canArreglo; i++) {

		cout << "\n\Ingrese el numero: " << (i + 1) << endl;
		cin >> datos[i];
	}

	
	cout << "\n\Los numeros que ingreso son: " << endl;
	for (int i = 0; i < canArreglo; i++) {
		cout << datos[i] << endl;

	}

	cout << "\n\El promedio de esos numeros son: " << endl;
	for (int i = 0; i < canArreglo; i++) {
		sumar = datos[i] + sumar;

	}
	//El promedio de los numeros ingresados en un arreglo

	promedio = sumar / cant;
	cout << promedio << endl;
	return 0;
}