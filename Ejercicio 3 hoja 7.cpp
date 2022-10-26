#include <iostream>
using namespace std;

int main() {
	int n;
	do {
		cout << "Ingrese un numero entero: ";
		cin >> n;
	} while (n <= 1 || n > 9);
	
	for (int i = 1; i <= n; i++) {
		cout << endl;
		for (int j = 1; j <= i; j++) {
			if(j==1){
				cout<<"          "<<n;
			}
			else if(j==i){
				cout<<" "<<n+1-i<<" ";
			}
			else{
				cout<<"  ";
			}
		}
	}
	
	for (int i = n - 1; i >= 0; i--) {
		cout << endl;
		for (int j = 1; j <= i; j++) {
			if(j==1){
				cout<<"          "<<n;
			}
			else if(j==i){
				cout<<" "<<n+1-i<<" ";
			}
			else{
				cout<<"  ";
			}
		}
	}
	return 0;
}
