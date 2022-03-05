//Clase no. 4-2: cálculo de IVA
/*Ejercicio no. 2: escriba un programa que lea de la entrada estándar el precio de un producto y muestre
en la salida estándar el precio del producto al aplicarle el IVA*/

#include <iostream>
using namespace std;

int main() {
	float pre1, IVA = 0, pre2;

	cout << "Ingrese el precio del producto "; cin >> pre1;

	pre2 = pre1 / 1.12;
	IVA = pre2 * 12 / 100;

	cout << "El IVA del producto es " << IVA<<endl;
	cout << "El precio del producto al aplicarle el IVA es "<< pre2<<endl;

	return 0;
}
