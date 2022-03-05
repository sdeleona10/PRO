//Clase no. 3: lectura o entrada de datos
#include <iostream>
using namespace std;

int main() {
	int entero;
	float flotante;
	cout << "Introduzca un numero entero ";
	cin >> entero;
	cout << "Introduzca un numero flotante ";
	cin >> flotante;
	cout << "\nEl numero entero que usted introdujo es "<<entero;
	cout << "\nEl numero flotante que usted introdujo es " <<flotante ;
}

//Para realizar comentarios de una línea se utilizan "//".
//Para realizar comentarios de varias líneas se utiliza "/*" para abrir y "*/" para cerrar.
/*Para dar saltos de línea se utiliza "\n" cuando se coloca junto al texto entre comillas, cuando no,
se utiliza se escribe "<<" para añadir y luego "endl" para dar el salto de línea.*/