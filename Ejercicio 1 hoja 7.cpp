#include <iostream>
using namespace std;

int compare(int n1, int n2) {
	if (n1 > n2)return n1;
	return n2;
}

int main(){
	bool Num1 = true;
	int n_cantidad=0, num=0, suma=0, mayor=0, numeromay=0, num1 = 0, num2 = 0;
	float promedio = 0;

	do{
		numeromay = num;
		do{
			cout << "\nDigite un numero entero: "; 
			cin >> num;
		} while (num < 0);

		num2 = num;
		numeromay = compare(numeromay, num2);
		suma += num;
		n_cantidad++;
		
		promedio = suma / n_cantidad;
	} while (num != 0);

	cout << "\nMayor de los digitos: " << numeromay;
	cout << "\nPromedio de los digitos: " << promedio;
	cout << "\nCantidad de digitos ingresados: " << n_cantidad-1;
	
	return 0;
}
