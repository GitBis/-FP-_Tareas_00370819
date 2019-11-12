#include <iostream>
int main()
{
	int num1; int num2; int resultado = 0; int opcion; int rest;
	std::cout << "\n\t\RESTA DE DOS NUMEROS\n";
	std::cout << "\n\A que numero le va a restar: ";
	std::cin >> rest;
	std::cout << "\n\Con cero se cierra el bucle\n";
	std::cout << "Ingrese un numero: \n";
	std::cin >> num1;
	while (num1 != 0) {
		std::cout << "Ingrese un numero: \n";
		std::cin >> num1;
		resultado = resultado + num1;
	}
	rest = rest - resultado;
	std::cout << "El resultado es: " << rest<< "\n";
	return 0;

}