#include <iostream>
using namespace std;

int main()
{
	int agregar, bebidas, pupusas, comer, ordenar;

	float ordenar1, total;

	cout << "\n\t\RESTAURANTE LAS DELICIAS\n" << endl;
	cout << "\n\t\Bienvenido elija una de las opciones del menu" << endl;
	cout << "\n\Pollo a la plancha......$2.25  [1]";
	cout << "\n\Sopa de Res.............$2.50  [2]";
	cout << "\n\Carne con vegetales.....$2.50  [3]";
	cout << "\n\Pupusas.................$0.50++[4]";
	cout << "\n\Salir                          [0]" << endl;
	cout << "" << endl;
	cin >> comer;

	switch (comer) {
	


	case 1:

		cout << "\n\A escogido comer Pollo a la plancha";
		cout << "\n\Su total seria de $2.25";
		cout << "\n\Desea agreagar una bebida? (1 para si 0 para no)" << endl;
		cout << "" << endl;
		cin >> agregar;

		if (agregar == 1) {

			cout << "\n\t\BEBIDAS" << endl;
			cout << "\n\Horchata.........$0.75 [1]";
			cout << "\n\Limonada.........$0.50 [2]";
			cout << "\n\Soda.............$0.50 [3]";
			cout << "\n\Jugo.............$0.50 [4]";
			cout << "\n\Chocolate........$0.50 [5]";
			cout << "\n\Leche............$0.50 [6]";
			cout << "\n\Cafe...........  $0.25 [7]";
			cout << "\n\Ninguna bebida.........[0]" << endl;
			cin >> bebidas;

			if (bebidas == 1) {
				cout << "\n\Su total serian de $ 3.00" << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}
			else if (bebidas > 1 and bebidas < 7) {
				cout << "\n\Su total serian de $ 2.75" << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}
			else if (bebidas == 7) {
				cout << "\n\Su total serian de $ 2.50" << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}
			else if (bebidas == 0) {
				cout << "\n\Su total serian de $ 2.25" << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}
		}
		else if (agregar == 0) {
			cout << "\n\Su total serian de $ 2.25" << endl;
			cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
		}

	break;




    case 2:

		cout << "\n\A escogido comer Sopa de res";
		cout << "\n\Su total seria de $2.50";
		cout << "\n\Desea agreagar una bebida? (1 para si 0 para no)" << endl;
		cout << "" << endl;
		cin >> agregar;

		if (agregar == 1) {

			cout << "\n\t\BEBIDAS" << endl;
			cout << "\n\Horchata.........$0.75 [1]";
			cout << "\n\Limonada.........$0.50 [2]";
			cout << "\n\Soda.............$0.50 [3]";
			cout << "\n\Jugo.............$0.50 [4]";
			cout << "\n\Chocolate........$0.50 [5]";
			cout << "\n\Leche............$0.50 [6]";
			cout << "\n\Cafe...........  $0.25 [7]";
			cout << "\n\Ninguna bebida.........[0]" << endl;
			cin >> bebidas;

			if (bebidas == 1) {
				cout << "\n\Su total serian de $ 3.25" << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}
			else if (bebidas > 1 and bebidas < 7) {
				cout << "\n\Su total serian de $ 3.00" << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}
			else if (bebidas == 7) {
				cout << "\n\Su total serian de $ 2.75" << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}
			else if (bebidas == 0) {
				cout << "\n\Su total serian de $ 2.50" << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}

		}
		else if (agregar == 0) {
			cout << "\n\Su total serian de $ 2.50" << endl;
			cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;

		}

	break;


	case 3:

		cout << "\n\A escogido comer Carne con Vegetales";
		cout << "\n\Su total seria de $2.50";
		cout << "\n\Desea agreagar una bebida? (1 para si 0 para no)" << endl;
		cout << "" << endl;
		cin >> agregar;

		if (agregar == 1) {

			cout << "\n\t\BEBIDAS" << endl;
			cout << "\n\Horchata.........$0.75 [1]";
			cout << "\n\Limonada.........$0.50 [2]";
			cout << "\n\Soda.............$0.50 [3]";
			cout << "\n\Jugo.............$0.50 [4]";
			cout << "\n\Chocolate........$0.50 [5]";
			cout << "\n\Leche............$0.50 [6]";
			cout << "\n\Cafe...........  $0.25 [7]";
			cout << "\n\Ninguna bebida.........[0]" << endl;
			cin >> bebidas;

			if (bebidas == 1) {
				cout << "\n\Su total serian de $ 3.25" << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}
			else if (bebidas > 1 and bebidas < 7) {
				cout << "\n\Su total serian de $ 3.00" << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}
			else if (bebidas == 7) {
				cout << "\n\Su total serian de $ 2.75" << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}
			else if (bebidas == 0) {
				cout << "\n\Su total serian de $ 2.50" << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}

		}
		else if (agregar == 0) {
			cout << "\n\Su total serian de $ 2.50" << endl;
			cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;

		}

	break;

    case 4:

		cout << "\n\A escogido comer Pupusas";
		cout << "\n\Elija de que va a comer";
		cout << "\n\Frijol con queso.......$ 0.50 [1]";
		cout << "\n\Solo de Queso..........$ 0.75 [2]";
		cout << "\n\Revueltas..............$ 0.60 [3]";
		cout << "" << endl;
		cin >> pupusas;

		switch (pupusas) {
		
		case 1:
			cout << "\n\Ha escogido pupusas de Frijol con queso" << endl;
			cout << "\n\Cuantas va a ordenar?" << endl;
			cin >> ordenar;

			ordenar1 = ordenar * 0.50;

			break;

		case 2:

			cout << "\n\Ha escogido pupusas de Queso" << endl;
			cout << "\n\Cuantas va a ordenar?" << endl;
			cin >> ordenar;

			ordenar1 = ordenar * 0.75;


			break;


		case 3:

			cout << "\n\Ha escogido pupusas Revueltas" << endl;
			cout << "\n\Cuantas va a ordenar?" << endl;
			cin >> ordenar;

			ordenar1 = ordenar * 0.60;

			break;
		
		}

		cout << "\n\Desea agreagar una bebida? (1 para si 0 para no)" << endl;
		cout << "" << endl;
		cin >> agregar;

		if (agregar == 1) {

			cout << "\n\t\BEBIDAS" << endl;
			cout << "\n\Horchata.........$0.75 [1]";
			cout << "\n\Limonada.........$0.50 [2]";
			cout << "\n\Soda.............$0.50 [3]";
			cout << "\n\Jugo.............$0.50 [4]";
			cout << "\n\Chocolate........$0.50 [5]";
			cout << "\n\Leche............$0.50 [6]";
			cout << "\n\Cafe...........  $0.25 [7]";
			cout << "\n\Ninguna bebida.........[0]" << endl;
			cin >> bebidas;

			if (bebidas == 1) {

				total = ordenar1 + 0.75;

				cout << "\n\Su total serian de $ " << total << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}
			else if (bebidas > 1 and bebidas < 7) {

				total = ordenar1 + 0.50;
				cout << "\n\Su total serian de $ " << total << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}
			else if (bebidas == 7) {

				total = ordenar1 + 0.25;
				cout << "\n\Su total serian de $ " << total << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}
			else if (bebidas == 0) {
				cout << "\n\Su total serian de $ " << ordenar1 << endl;
				cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;
			}

		}
		else if (agregar == 0) {
			cout << "\n\Su total serian de $ " << ordenar1 << endl;
			cout << "\n\Gracias por su compra, lo esperamos de nuevo." << endl;

		}

	break;

    case 5:

	exit(0);


	break;


	}

}


