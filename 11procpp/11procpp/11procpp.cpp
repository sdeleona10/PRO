//Clase no. 11: La sentencia If.

#include <iostream>
using namespace std;

int main() {
	int n1, dato1 = 5;

	cout << "Ingrese un numero "; cin >> n1;

	if (n1 == dato1) {
		cout << "El numero es igual a 5";
	}
	else
	{
		cout << "El numero es diferente de 5";
	}
	return 0;
}