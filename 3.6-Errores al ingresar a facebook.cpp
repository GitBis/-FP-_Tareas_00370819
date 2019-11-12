#include<iostream>
using namespace std;

int main() {
	int caso;
	cout<<"\n\t\ERRORES AL INGRESAR A FACEBOOK\n" << endl;
	cout<<"Mensaje caso 1"<<endl;
	cout<<"Mensaje caso 2"<<endl;
	cout<<"Mensaje caso 3"<<endl;
	cout<<"Mensaje caso 4"<<endl;
	cout<<"Mensaje caso 5"<<endl;
	cout << "" << endl;
	cin>>caso;


	switch (caso) {

	case 1: 

		cout<<"\n\Error de credenciales"<<endl;

	break;

	case 2: 
		cout<<"\n\Error de credenciales"<<endl;

	break;

	case 3: 
		cout<<"\n\Error de credenciales"<<endl;

	break;

	case 4: 
		cout <<"\n\Su conexion no es la adecuada"<< endl;

	break;

	case 5: 
		cout << "\n\Su cuenta no existe"<< endl;

	break;

	default: cout<<"\n\Esa no era una de las opciones" << endl;
	}
	return 0;
}