#include <iostream>
#include <vector>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int n = 1;
	int cont_testes = 0;
	while(n != 0){
		cin >> n;
		if(n != 0){
			cont_testes++;
			int a = 0;
			int b = 0;
			int soma_a = 0;
			int soma_b = 0;
			vector<int> diferenca;
			for(int i = 0; i < n; i++){
				cin >> a >> b;
				soma_a += a;
				soma_b += b;
				if(soma_a != soma_b){
					if(soma_a > soma_b){
						diferenca.push_back(soma_a - soma_b);
					} else{
						diferenca.push_back(soma_a - soma_b);
					}
				} else {
					diferenca.push_back(0);
				}
			}
			cout << "Teste " << cont_testes << "\n";
			for(int i = 0; i < n; i++){
				cout << diferenca[i] << "\n";
			}
		}
	}
	
	return 0;
}

