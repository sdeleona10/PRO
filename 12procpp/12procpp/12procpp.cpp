//Clase no.12: la sentencia switch.
/*Anteriormente se vio la sentencia if que es una condicional doble ahora va 
la sentencia switch que es una multicondicional. */

#include <iostream>
using namespace std;

int main() {
	int número;
	cout << "Introduzca un numero de 1 a 5: "; cin >> número;

	switch (número)
	{
	case 1: cout << "El numero es 1"; break;
	case 2: cout << "El numero es 2"; break;
	case 3: cout << "El numero es 3"; break;
	case 4: cout << "El numero es 4"; break;
	case 5: cout << "El numero es 5"; break;
	default: cout << "El numero no esta en el rango"; break;
	}

	return 0;
}

