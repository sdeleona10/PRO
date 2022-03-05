//Clase no. 9: porcentaje de notas de un alumno.
/*Ejercicio no. 7: La calificación final de un estudiante es la media ponderada de tres notas.
La nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% 
y la nota de participación que cuenta el 10% restante. Escriba un programa que lea  de la 
entrada estándar las tres notas de un alumno y escriba en la salida estándar su nota final.*/

#include <iostream>
using namespace std;

int main() {
	float pra, teo, par, fin;

	cout << "Se calculara la nota final del alumno " << endl;
	cout << "Ingrese la nota de practicas "; cin >> pra;
	cout << "Ingrese la nota teorica "; cin >> teo;
	cout << "Ingrese la nota de participacion "; cin >> par;

	pra *= 0.3;
	teo *= 0.6;
	par *= 0.1;

	fin = pra + teo + par;
	cout << "La nota final es " << fin<<endl;

	return 0;
}
