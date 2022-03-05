//Clase no. 4: operaciones aritméticas
/*Ejercicio no. 1: escriba un programa que lea dos números de la entrada estándar y muestre 
la suma, resta, multiplicación y división de estos en la salida estándar*/

#include <iostream>
using namespace std;
int main() {
	int n1, n2, suma = 0, resta = 0, multiplicación = 0, división = 0;
	
	cout << "Introduzca un numero "; cin >> n1;
	cout << "Introduzca otro numero "; cin >> n2;

	suma = n1 + n2;
	resta = n1 - n2;
	multiplicación = n1 * n2;
	división = n1 / n2;

	cout << "El resultado de la suma es "<< suma << endl;
	cout << "El resultado de la resta es "<< resta << endl;
	cout << "El resultado de la multiplicacion es "<< multiplicación << endl;
	cout << "El resultado de la division es "<< división << endl;

	return 0;
}