//Clase no. 14: determinar numero par o impar.
/*Ejercicio no. 3: realice un programa que lea un valor entero y determine 
si se trata de un número par o impar. */

#include <iostream>
using namespace std;

int main() {
	int número;
	cout << "Digite un numero "; cin >> número;

	if (número==0)
	{
		cout << "El numero es cero";
	}
	else if (número%2==0)
	{
		cout << "El numero es par";
	}
	else
	{
		cout << "El numero es impar";
	}

	return 0;
}
