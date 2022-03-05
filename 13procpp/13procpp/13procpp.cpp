//Clase no. 13: determinar el mayor.
/*Ejercicio no. 1 (condicionales): Escriba un programa que lea dos números 
y determine cuál de ellos es el mayor. */
#include <iostream>
using namespace std;

int main() {
	int n1, n2;

	cout << "Ingrese dos numeros "; cin >> n1 >> n2;

	if (n1==n2)
	{
		cout << "Los numeros son iguales";
	}
	else if (n1<n2)
	{
		cout << "El numero mayor es "<<n2;
	}
	else
	{
		cout << "El numero mayor es "<<n1;
	}

	return 0;
}
