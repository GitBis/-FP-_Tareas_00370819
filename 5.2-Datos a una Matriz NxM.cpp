#include <iostream>
using namespace std;

int nums[5][5], fil, colum;

int main(){
cout << "\n\Filas: "<< endl;
cin >> fil;
cout << "\n\Columnas: "<<endl; 
cin >> colum;

for (int i = 0; i < fil; i++) {
for (int j = 0; j < colum; j++) {
cout << "Ingrese un numro: [" << i << "][" << j << "]";
cin >> nums[i][j];
  }
}
for (int i = 0; i < fil; i++) {
for (int j = 0; j < colum; j++) {
cout << nums[i][j];
}
cout << "\n";
}
 return 0;

}
//Para ingresar n numeros a una matriz