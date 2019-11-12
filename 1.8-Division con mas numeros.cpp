#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	int num1; int num2; int resultado = 1; int can, num3;
	cout << "\n\t\MULTIPLICACION DE DOS NUMEROS\n";
    cout << "Ingrese el numero: " <<endl;
    cin >> num1;
	cout << "Ingrese el numero: " << endl;
	cin >> num2;
	cout << "Ingrese el numero: " << endl;
	cin >> num3;
	resultado = ((num1/num2)/num3);
	
	std::cout << "El resultado es: " << resultado << "\n";
	return 0;

}