#include <iostream>
#include <math.h>
using namespace std;
int factorial(int n) {
	int i, producto = 1;
	for (i = n; i > 1; --i) {
		producto *= i;
	}
	return producto;
}
int main() {
	int a, b, n;
	double suma{}, numerador,denominador;
	do{
		cout << "Ingrese el valor de N: ";
		cin >> n;
	} while (n<1||n>10);
	do{
		cout << "Ingrese el valor de a: ";
		cin >> a;
	} while (a<4||a>6);
	do{
		cout << "Ingrese el valor de b: ";
		cin >> b;
	} while (b<1||b>3);

	for (int i = 1; i <= n; i++) {
		numerador = pow(a, i) * pow(b, i + 1);
		denominador = (a - b)*(factorial(i));
			if (i % 2 == 0) {
				suma = suma - (numerador / denominador);
			}
			else {
				suma = suma + (numerador / denominador);
			}
	}
	cout << "El valor de X es: " << suma;
	return 0;
}
