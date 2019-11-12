#include <iostream>
using namespace std;

int numeros[5][5], fil, colum, k;
int main() {

cout<< "\n\Filas: "<<endl; 
cin>> fil;
cout<< "\n\Columnas: "<<endl; 
cin>> colum;
cout<< "Ingrese un numero entero: "<<endl; 
cin>> k;

for (int i = 0; i < fil; i++) {
    for (int j = 0; j < colum; j++) {
	 cout<< "Ingrese un numero: [" << i << "][" << j << "]"; //numero a multipliplicar
	 cin>>numeros[i][j];
	}
}
for (int i = 0; i < fil; i++) {
	for (int j = 0; j < colum; j++) {
	 numeros[i][j] * k;
		}
	}

cout << "\n\t\Matriz: \n" << endl;
for (int i = 0; i < fil; i++) {
	for (int j = 0; j < colum; j++) {
	cout<<numeros[i][j] << " ";
	}
	cout<<"\n"<<endl;
}

cout << "\n\t\Resultado: \n" << endl;
	for (int i = 0; i < fil; i++) {
	for (int j = 0; j < colum; j++) {
	cout<<numeros[i][j]*k << " ";
	}
		cout << "\n"<<endl;
}
	return 0;
}

//Multiplica un numeto entero, por los numeros ingresados en la matriz