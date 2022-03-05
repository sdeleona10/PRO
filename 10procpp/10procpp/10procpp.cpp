//Clase no. 10: potenciación y radicación
/*Ejercicio no. 9: Realice un programa que calcule el valor que toma la función 
"f(x,y)=((x)^1/2)/(y^2 - 1)" para unos datos dados x e y.*/

#include <iostream>
//Hay una librería que permite la solución de radicales y potencias y es la siguiente.
#include <math.h>
/*Esta es la librería matemática y trigonométrica de C++ que tiene entre sus funciones 
la resolución de radicales y potencias.*/

using namespace std;
int main(){
	float x, y, re;
	cout << "Se calculara el valor de una funcion " << endl;
	cout << "Digite el valor de x "; cin >> x;
	cout << "Digite el valor de y "; cin >> y;

	re = (sqrt(x)) / (pow(y,2)-1);

	cout.precision(3);
	cout << "El resultado de la expresion es " << re<<endl;


	return 0;
}

