#include<iostream>
using namespace std;
int main() {
	float num, mult = 0, prom, ponder, suma = 0, num2;

	cout << "Ingrese cantidad de notas: " << endl;
	cin >> num2;

	int Notas = num;
	int Ponde = num;
	float nota[Notas];
	float num[Ponde];

	for (int i = 0; i < Notas && i < Ponde; i++) {

	cout<<"Ingrese la nota " << (i + 1) << endl;
	cin>>nota[i];
	cout<< "Ingrese la ponderacion " << (i + 1) << endl;
	cin>> num2[i];

	ponder = nota[i] * num2[i];
	suma = suma + ponderaciones;
	prom = suma;
	}
	cout << "Promedio Final: " << prom << endl;

	return 0;
}