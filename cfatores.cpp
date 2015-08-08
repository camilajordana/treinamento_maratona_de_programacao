#include <iostream>
using namespace std;

int main(){
	long i = 2;
	long numero = 1;
	long ultimo = 1;
	int soma = 0;
	while(numero != 0){
		cin >> numero;
		long valor = numero;
		if(numero != 0){
			while(numero != 1){
				if(numero%i == 0){
					numero = numero/i;
					if(i != ultimo || ultimo == 1){
						soma++;
						ultimo = i;
					}
				} else{
					i++;
				}
			
			}
			cout << valor << " : " << soma << "\n";
		}
		soma = 0;
		i = 2;
		ultimo = 1;
	}
	return 0;
}
