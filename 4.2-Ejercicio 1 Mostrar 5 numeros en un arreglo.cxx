#include <iostream>

int main()
{
	int cantNum = 5;
	int numeros [cantNum];
	
	//Ingresar numero por medio de un for con arreglo
	for (int i = 0;  i < cantNum;  i++)
	{
	std::cout << "Ingrese el numero "<< (i+1)<< std::endl;
	std::cin >> numeros [i];
	}
	
	//Mostrar los numeros del arreglo
	
	std::cout << "Los numeros ingresados son"<<std::endl;
	for (int i = 0;  i < cantNum; i++){
	std::cout << numeros[i] << std::endl;	
		
		}	
		return 0;
}