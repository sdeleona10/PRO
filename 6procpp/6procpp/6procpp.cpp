//Clase no. 6: operaciones combinadas
//Ejercicio no. 1 (bloque 2): resuelva (a/b)+1 y muestre el resultado de la operación.

#include <iostream>
using namespace std;

int main() {
	float a, b, c, d;
	cout << "Introduzca un valor inicial "; cin >> a;
	cout << "Introduzca el valor que dividira al primero "; cin >> b;
	cout << "Introduzca el valor que sumara al cociente "; cin >> c;
	cout << "La operación que usted construyo es (" << a << "/" << b << ") + " << c << endl;

	d = (a / b) + c;	
	
	cout.precision(2);
	cout << "El resultado de la operacion es "<<d<<endl;

	return 0;
}
