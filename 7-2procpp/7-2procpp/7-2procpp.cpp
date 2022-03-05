//Clase no. 7-2: operacion combinadas (2)
//Ejercicio no. 4: resuelva a + (b/(c-d)) y mostrar el resultado.

#include<iostream>
using namespace std;

int main() {
	float a, b, c, d, e;

	cout << "La operacion a realizar es: a + (b/(c-d))"<<endl;
	cout << "Ingrese un valor "; cin >> a;
	cout << "Ingrese otro valor "; cin >> b;
	cout << "Ingrese otro valor "; cin >> c;
	cout << "Ingrese otro valor "; cin >> d;
	
	e = a + (b / (c - d));

	cout.precision(2);
	cout << "El resultado es " << e;

	return 0;
}
