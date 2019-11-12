#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n, b, factorial;
	cout << "\n\t\FACTORIAL DE UN NUMERO\n" << endl;
	cout<<"Ingrese el numero: ";
	cin>>n;
	
	factorial=1;
	if(n == 0){
		cout<<"El factorial de: "<<n<<" es: "<<factorial<<endl;
		}
	 else{
	 	
	for (b=1; b<=n; b++){
		factorial=b*factorial;
		}
		cout <<"El factorial de: "<<n<<" es: "<<factorial<<endl;
		
		
	return 0;
}}