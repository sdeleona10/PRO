//Clase no. 13-2: determinar el mayor (2).
/*Escriba un programa que lea tres números y determine el mayor de ellos.*/
#include <iostream>
using namespace std;

int main() {

	int n1, n2, n3;
	
	cout << "Ingrese tres numeros "; cin >> n1 >> n2 >> n3;

	if ((n1>n2)&(n1>n3))
	{
		cout << "El primer numero es mayor";
	}
	else if ((n2>n1)&(n2>n3))
	{
		cout << "El segundo numero es mayor";
	}
	else if ((n3>n1)&(n3>n2))
	{
		cout << "El tercer numero es mayor";
	}
	else
	{
		cout << "Los numeros son iguales";
	}
	return 0;
}
