//Clase no. 6-2: operaciones combinadas
//Ejercicio no. 2: resuelva (a+b)/(c+d) y muestre el resultado.

#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e;

	cout << "Introduzca el valor inicial "; cin >> a;
	cout << "Introduzca el valor que sumara al valor inicial "; cin>> b;
	cout << "Introduzca el valor inicial de la suma que dividira la suma anterior "; cin >> c;
	cout << "Introduzca el valor que sumara al segundo valor inicial "; cin >> d;
	cout << "La operacion que usted construyo es (" << a << "+" << b << ")/(" << c << "+" << d << ")"<<endl;

	e = (a+b)/(c+d);

	cout.precision(2);
	cout << "El resultado de la operacion es " << e<<endl;



	return 0;
}
