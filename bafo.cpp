#include <iostream>
using namespace std;

int main(){

	int n, a, b, qtd_a, qtd_b, cont;
	n=1;
	cont = 0;
	while(n!= 0){
		cin >> n;
		if(n!=0){
			cont++;
			qtd_a = 0;
			qtd_b = 0;
			for(int i = 0; i < n; i++){
				cin >> a >> b;
				qtd_a += a;
				qtd_b += b;
			}
			
			if(qtd_a > qtd_b) cout << "Teste " << cont << "\n" << "Aldo" << "\n\n";
			else cout << "Teste " << cont << "\n" << "Beto" << "\n\n";

		}
	}

	return 0;
}
