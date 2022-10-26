#include<iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	float sumatoria=0;
	float a;
	do{
		cout << "Ingrese el valor de N: ";
		cin >> n;
	} while (n<=0);
	do{
		cout << "Ingrese el valor de a: ";
		cin >> a;
	} while (a<1||a>4);

	for (int i = 1; i <= n; i++) {
		sumatoria = a / (pow(i,2)+i) + sumatoria;
	}
	cout << "Resultado: " << sumatoria;

	return 0;
}
