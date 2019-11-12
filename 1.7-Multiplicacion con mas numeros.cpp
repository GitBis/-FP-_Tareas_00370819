#include <iostream>
using namespace std;

int main()
{
	int num1; int num2; int resultado = 1; int can;
	cout << "\n\t\MULTIPLICACION DE DOS NUMEROS\n";
	cout << "\n\Ingresa la cantidad de numeros a multiplicar: ";
	cin >> can;
	for (int i = 1; i <= can; i++) {
		cout << "Ingrese el numero: "<<i<<endl;
		cin >> num1;
		resultado = resultado * num1;
	}
	std::cout << "El resultado es: " << resultado << "\n";
	return 0;

}

