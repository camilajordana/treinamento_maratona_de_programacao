#include <iostream>
using namespace std;

int main(){
	int n, numero, cont, valor_i;
	valor_i = -1;
	cont = 0;
	n = 1;
	while(n != 0){
		cin >> n;
		if(n != 0){
			for(int i = 0; i < n; i++){
				cin >> numero;
				if(numero == (i+1)){
					cont++;
					cout << "Teste " << cont << "\n" << (i+1) << "\n";

				}
			}
		}
	}


return 0;
}
