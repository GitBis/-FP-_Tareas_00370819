#include<iomanip>
#include<iostream>
using namespace std;

int Xfilas;
int Ycolumnas;
int Elejir;
int NumeroFila;

float Sumatoria;
float Promedio;
float LaMatriz[20][20];

int main() {

	Sumatoria = 0;

	cout << "\n\t\PRODEMEDIO DE LOS ESTUDIANTES\n" << endl;
	cout << "\n\Ingres la cantidad de Filas X (Estudiante) : " << endl;
	cin >> Xfilas;
	cout << "\n\Ingrese la cantida de Columnas Y (Notas): "<<endl; 
	cin >> Ycolumnas;
    cout << "\n\Almacenar los datos: " << endl;

	
	for (int i = 1; i <= Xfilas; i++) {

		for (int j = 1; j <= Ycolumnas; j++) {

		cout << "\n\  Nota  (" << j << ")   Estudiante  ["  << i <<  "]: ";

			cin >> LaMatriz[i][j];
		}
	}


	for (int i = 1; i <= Xfilas; i++) 
	{

	for (int j = 1; j <= Ycolumnas; j++){

		cout << LaMatriz[i][j] << "   |   ";
		
		}

		cout <<" "<< endl;
	}


	for (int i = 1; i <= Xfilas; i++) {

		for (int j = 1; j <= Ycolumnas; j++) 
{
Sumatoria = (Sumatoria + LaMatriz[i][j]); 

		}
	}

	Promedio = (Sumatoria / Xfilas);


	cout << "\n\El Promedio es: " <<fixed<<setprecision(2)<< Promedio << endl;


	for (int i = 1; i <= Xfilas; i++){

		for (int j = 1; j <= Ycolumnas; j++) 
		
		{
		cout << LaMatriz[i][j] << "  |  ";
		
		}
		cout <<" "<<endl;
	}

	cout << "\n\Promediar la nota de un estudiante?: " << endl;

	cout << "\n\(1-Para si y 0 para no)" << endl;

	cin >> Elejir;

while (Elejir == 0)

	{


		if (Elejir == 1){

			cout << "\n\Fila en la que esta el estudiante: "<<endl; 
			cin >> NumeroFila;

		if (NumeroFila >= 1 && NumeroFila <= Xfilas){

				Sumatoria = 0;

		for (int j = 1; j <= Ycolumnas; j++) 
		{

		Sumatoria = Sumatoria + LaMatriz[NumeroFila][j];	 		
				
			}

		Promedio = (Sumatoria / Ycolumnas);

		cout << "\n\El Promedio es: " << Promedio << endl;
		
		}

		else {

		cout << "\n\No Existe !!" << endl;

		}

		for (int i = 1; i <= Xfilas; i++)
			{

			for (int j = 1; j <= Ycolumnas; j++){

			cout << LaMatriz[i][j] << "  |  ";
			}
			cout <<" "<<endl;
			}

		}

	}
	return 0;
}
