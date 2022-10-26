#include <iostream>
using namespace std;
int main() {
	int n;
	do {
		cout << "Ingrese cantidad de cuadrados: "; //validacion
		cin >> n;
	} while (n < 1 || n>14);
	
	for (int lado = 1; lado <= n; lado++) { //cantidad de asteriscos
		for (int i = 1; i <= lado; i++) { //filas
			for (int j = 1; j <= lado; j++) { //columnas
				if (j == 1 || j == lado || i == 1 || i == lado) { //asteriscos
					cout << "* ";
				}
				else {
					cout << "  ";
				}
			}
			cout << "\n";
		}
	}

	return 0;
}
