//Clase no. 8: Intercambio de datos
/*Ejercicio no. 5: escriba un fragmento de programa que intercambie los valores de dos 
variables.*/

#include<iostream>
using namespace std;

int main() {
	int x, y, aux;

	cout << "Asigne valor a las variables x e y para luego ver el intercambio de estas"<<endl;
	cout << "Valor de x "; cin >> x;
	cout << "Valor de y "; cin >> y;
	cout << "Inicialmente x valia " << x << " e y valia " << y << endl;

	aux = x;
	x = y;
	y = aux;

	cout << "Ahora el nuevo valor de x es " << x << " y el nuevo valor de y es " << y << endl;

	return 0;
}
