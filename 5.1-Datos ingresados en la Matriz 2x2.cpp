#include<iostream>
using namespace std;

int matriz[2][2];
//Mostrar los datos ingresados en la matriz
int main() {
	cout << "MATRIZ" << endl;
	cout << "Ingrese numeros enteros: " << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
        cin >> matriz[i][j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << matriz[i][j];
		}
		cout << "\n\t";
	}


	return 0;
}