//Clase no. 8-2: cálculo de media.
/*Ejercicio no. 6: Escriba un programa que lea la nota final de cuatro alumnos
y calcule la nota final media de los cuatro alumnos.*/

#include <iostream>
using namespace std;

int main() {

	float n1, n2, n3, n4, m;

	cout << "Se calculara la media de las notas finales de cuatro alumnos"<<endl;
	cout << "Ingrese la nota del primer alumno "; cin >> n1;
	cout << "Ingrese la nota del segundo alumno "; cin >> n2;
	cout << "Ingrese la nota del tercer alumno "; cin >> n3;
	cout << "Ingrese la nota del cuarto alumno "; cin >> n4;

	m = (n1 + n2 + n3 + n4) / 4;
	cout << "La media de las cuatro notas finales es " << m << endl;

	return 0;
}
