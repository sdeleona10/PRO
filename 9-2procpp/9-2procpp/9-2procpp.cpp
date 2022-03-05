//Clase 9-2: triángulo rectángulo
/*Ejercicio no. 8: escriba un programa que lea de la entrada estándar los dos catetos
de un triángulo rectángulo y escriba en la salida estándar su hipotenusa.*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float co, ca, h;

	cout << "Este programa calculara la hipotenusa del triangulo rectangulo "<<endl;
	cout << "Ingrese el cateto opuesto "; cin >> co;
	cout << "Ingrese el cateto adyacente "; cin >> ca;

	
	h=(sqrt(pow(co,2)+pow(ca,2)));
	cout << "El valor de la hipotenusa es " << h;


	return 0;
}
