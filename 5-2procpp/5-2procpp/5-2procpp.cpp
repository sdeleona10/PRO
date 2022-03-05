//Clase no. 5-2: Entradas erroneas.
/*Ejercicio no. 4: ejecute el programa del ejercicio anterior con entradas erróneas y observe los resultados.
Por ejemplo, introduzca un dato de tipo caracter cuando se espera un dato de tipo entero.*/
#include <iostream>
using namespace std;

int main() {
	int edad;
	char sexo[10];
	float altura;

	cout << "Introduzca su edad "; cin >> edad;
	cout << "Introduzca su sexo "; cin >> sexo;
	cout << "Introduzca su altura en metros "; cin >> altura;

	cout << "La edad ingresada fue " << edad << endl;
	cout << "El sexo ingresado fue " << sexo << endl;
	cout << "La altura ingresada fue " << altura << endl;

	return 0;
}
