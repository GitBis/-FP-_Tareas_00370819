#include <iostream>
using namespace std;

int nums[5][5], fil, colum;

int main() {
	

cout<<"\n\Filas: "<<endl; 
cin>>fil;
cout<<"\n\Columnas: "<<endl; 
cin >>colum;

for (int i = 0; i < fil; i++) {
	for (int j = 0; j < colum; j++) {
	cout << "Ingese un entero: [ " << i << " ][" << j << "]";
	cin >> nums[i][j];
}}

cout << "\n\t\Matriz\n"<<endl;
	for (int i = 0; i < fil; i++) {
	for (int j = 0; j < colum; j++) {
    cout << nums[i][j]<< "   |   ";
	}
	cout << "\n"<<endl;
}
cout<<"\n\t\Diagonal principal\n"<<endl;
for (int i = 0; i < fil; i++) {
	for (int j = 0; j < colum; j++) {
	 if (i == j) {
	cout << nums[i][j]<<"   |   ";
	} } }

	return 0;
}

//muestra la dioganl principal de la matriz