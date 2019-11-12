#include <iostream>
int main()
{
	int num1; int num2; int resultado=0; int opcion;
	std::cout << "\n\t\SUMA DE DOS NUMEROS\n";
	std::cout << "\n\Con cero se cierra el bucle\n";
	std::cout << "Ingrese un numero: \n";
	std::cin >> num1;
	while (num1 != 0) {
		std::cout << "Ingrese un numero: \n";
		std::cin >> num1;
		resultado = resultado+num1;		
	}
	std::cout << "El resultado es: " << resultado << "\n";
	return 0;

}