//Clase no. 4: operaciones aritm�ticas
/*Ejercicio no. 1: escriba un programa que lea dos n�meros de la entrada est�ndar y muestre 
la suma, resta, multiplicaci�n y divisi�n de estos en la salida est�ndar*/

#include <iostream>
using namespace std;
int main() {
	int n1, n2, suma = 0, resta = 0, multiplicaci�n = 0, divisi�n = 0;
	
	cout << "Introduzca un numero "; cin >> n1;
	cout << "Introduzca otro numero "; cin >> n2;

	suma = n1 + n2;
	resta = n1 - n2;
	multiplicaci�n = n1 * n2;
	divisi�n = n1 / n2;

	cout << "El resultado de la suma es "<< suma << endl;
	cout << "El resultado de la resta es "<< resta << endl;
	cout << "El resultado de la multiplicacion es "<< multiplicaci�n << endl;
	cout << "El resultado de la division es "<< divisi�n << endl;

	return 0;
}