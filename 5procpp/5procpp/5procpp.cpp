//Clase no. 5: pedir datos al usuario y mostrarlos en pantalla.
/*Ejercicio no. 3: Elabore un programa que lea de la entrada estándar los siguientes datos 
de una persona:
	Edad: dato de tipo entero
	Sexo: dato de tipo caracter
	Altura en metros: dato de tipo real
Tras leer los datos el programa debe mostrarlos en la salida estándar.*/

#include <iostream>
using namespace std;

int main() {
	int edad;
	char sexo[10];
	float altura;

	cout << "Introduzca su edad "; cin >> edad;
	cout << "Introduzca su sexo "; cin >> sexo;
	cout << "Introduzca su altura en metros "; cin >> altura;

	cout << "La edad ingresada fue "<<edad<<endl;
	cout << "El sexo ingresado fue "<<sexo<<endl;
	cout << "La altura ingresada fue "<<altura<<endl;

	return 0;
}
