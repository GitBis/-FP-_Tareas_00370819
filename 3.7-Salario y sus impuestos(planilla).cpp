#include "pch.h"
#include <iostream>
#include <math.h>
#include <iomanip> // libreria para utilizar setprecision(2) el cual sirve para mostrar n ceros despues del decimal, en este caso 2 ceros.
using namespace std;

// AFP= 6.25%   Seguro= 3%   Horas extras= $3 

int salir, repetir, opcion;
float salario_final, salario, horas_extras, afp, seguro, renta, su_impuesto, dinero_extra, salario_con_horas;
int main() {

	repetir = 1;

	do {
		cout << "\n\t\BIENVENIDO\n" << endl;
		cout << "\n\Este es un progrma para calcular su salario despues de aplicar los impuestos" << endl;
		cout << "que le corresponden en base a sus ingresos y como lo estable la ley" << endl;
		cout << "en El Salvador respectivo en el 2019" << endl;
		cout << "\n\n\Elija de una de las siguientes opciones: \n" << endl;
		cout << "1.-Entrar y calcular mi salario\n" << endl;
		cout << "2.-Salir\n" << endl;
		cin >> opcion;

		system("cls");

		switch (opcion)
		{
		case 1:

			cout << "\n\t\CALCULAR SALARIO Y SUS IMPUESTOS\n" << endl;
			cout << "\n\Ingrese su salario mensual: \n" << endl;
			cin >> salario;
			cout << "\n\Ingrese las horas extras: \n" << endl;
			cin >> horas_extras;

			dinero_extra = horas_extras * 3;
			salario_con_horas = salario + dinero_extra;
			afp = salario_con_horas * 0.0625;
			seguro = salario_con_horas * 0.03;
			su_impuesto = afp + seguro;
			salario_final = (salario - su_impuesto) + dinero_extra;

			//Redondear a dos decimales, tanto en el resultado como en el proceso

			seguro = round(seguro * 100) / 100;

            afp = round(afp * 100) / 100;

			salario_final = round(salario_final * 100) / 100;


			if (salario >= 472.01) { //10% + cuota fija de $17.67

				renta = 17.67 + (salario_con_horas * 0.1);

				salario_final = ((salario - su_impuesto) - renta) + dinero_extra;

				salario_final = round(salario_final * 100) / 100; //redondear
			}

			else if (salario >= 895.25) { //20% + cuota fija de $60

				renta = 60 + (salario_con_horas * 0.2);

				salario_final = ((salario - su_impuesto) - renta) + dinero_extra;

				salario_final = round(salario_final * 100) / 100; //redondear
			}


			else if (salario >= 2038.11) { //30% + cuota fija de $288.57

				renta = 288.57 + (salario_con_horas * 0.3);
				salario_final = (salario - su_impuesto - renta) + dinero_extra;
				
				salario_final = round(salario_final * 100) / 100; //redondear
			
			}

			

			cout << "\n\n\t\Su salario base es: $" << fixed << setprecision(2) << salario << endl;
			cout << "\n\t\Su dinero de las horas extras es de: $" << fixed << setprecision(2) << dinero_extra << endl;
			cout << "\n\t\Impuesto de la AFP es: $" << fixed << setprecision(2) << afp << endl;
			cout << "\n\t\Impuesto de seguro es: $" << fixed << setprecision(2) << seguro << endl;
			cout << "\n\t\Impuesto sobre la renta es: $" << fixed << setprecision(2) << renta << endl;
			cout << "\n\t\Su salario mensual seria de: $" << fixed << setprecision(2) << salario_final << endl;
			//printf("%.2f", salariofinal);
			cout << "\n" << endl;


			break;

		case 2:

			exit(0);


		default: cout << "\n\t\Esa no era una de las opciones :( vuelve a elegir\n" << endl;
			break;
		}

		system("pause");
		system("cls");
	}


	while (repetir == 1);


	return 0;

}
