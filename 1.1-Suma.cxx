#include <iostream>
int main()
{
	int num1; int num2; int resultado;
	std::cout << "\n\t\SUMA DE DOS NUMEROS\n";
	std::cout << "Ingrese un numero: \n";
	std::cin >> num1;
	std::cout << "Ingrese otro numero: \n";
	std::cin >> num2;
	resultado = num1 + num2;
	std::cout << "El resultado es: " << resultado << "\n";
	return 0;

}