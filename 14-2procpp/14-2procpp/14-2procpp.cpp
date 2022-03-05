/*Clase no. 14-2: Comprobar si el número digitado por el usuario es positivo
o es negativo. */

#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Ingrese un numero cualquiera "; cin >> n;
	if (n==0)
	{
		cout << "El numero que ingreso es cero" << endl;
	}
	else if (n>0)
	{
		cout << "El numero que ingreso es positivo " << endl;
	}
	else
	{
		cout << "El numero que ingreso es negativo " << endl;
	}

	return 0;
}
