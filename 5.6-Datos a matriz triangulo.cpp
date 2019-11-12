#include<iostream>
#include<iostream>
using namespace std;

int fil, colum;

int main() {


cout << "Filas: "; 
cin >> fil;
cout << "Columnas: "; 
cin >> colum;

int matriz[fil][colum];
cout << "Ingrese numeros enteros: " << endl;

for (int i = 0; i < fil; i++) {
for (int j = 0; j < colum; j++) {
cin >> matriz[i][j];	}
}
cout << "\n\t\Matriz" << endl;
for (int i = 0; i < fil; i++) {
	for (int j = 0; j < colum; j++) {
	cout << matriz[i][j] << "   |    ";
	}
	cout <<"  "<< endl;
	}
cout << "Matriz Triangular de arriba" << endl;
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < colum; j++) {
			if (i <= j) {
				cout << matriz[i][j] << "   |   ";
			}

		}
		cout << endl;
	}
cout << "Matriz triangular de abajo" << endl;
	for (int i = 0; i < fil; i++) {
	for (int j = 0; j < colum; j++) {
	if (j <= i) {
		cout << matriz[i][j] << "   |    ";
	}}
		cout <<"  "<< endl;
	}
	return 0;
}