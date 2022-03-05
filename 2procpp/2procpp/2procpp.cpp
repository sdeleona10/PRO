//Clase no. 2: tipos de datos básicos de C++

#include <iostream>
using namespace std;
int main() {
	//El tipo de dato int se refiere a los números enteros.
	int entero;
	entero = 15;
	cout << entero<<" es un tipo de dato entero" << "\n";
	//El tipo de dato float se refiere a los números decimales.
	float flotante;
	flotante = 10.87;
	cout << flotante<<" es un tipo de dato flotante" << "\n";
	//El tipo de dato double se refiere a los decimales tambien
	//pero este puede contener números más extensos.
	double mayor;
	mayor = 26.7873847;
	cout << mayor<<" es un tipo de dato doble"<<"\n";
	//El tipo de dato char se refiere a cualquier caracter que se
	//pueda introducir, ya sea una letra o un número.
	char caracter;
	caracter = 'A';
	cout << caracter<<" es un tipo de dato caracter"<<"\n";

	return 0;
}

