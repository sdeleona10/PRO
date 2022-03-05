// Clase no. 7: operaciones combinadas (2)
//Ejercicio no. 3: resuelva (a+(b/c))/(d+(e/f)) y muestre el resultado.

#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e, f, g;

	cout << "Introduzca el primer valor "; cin >> a;
	cout << "Introduzca otro valor "; cin >> b;
	cout << "Introduzca otro valor "; cin >> c;
	cout << "Introduzca otro valor "; cin >> d;
	cout << "Introduzca otro valor "; cin >> e;
	cout << "Introduzca otro valor "; cin >> f;

	g = (a + (b / c)) / (d + (e / f));

	cout << "El resultado de la operacion es "<<g;

}
