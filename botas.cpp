#include <iostream>
#include <vector>

using namespace std;

int main(){
	int qtd = 0;
	
	while(cin >> qtd){
		int soma = 0;
		vector<int> tamanho(qtd);
		vector<char> pe(qtd);

		for(int i = 0; i < qtd; i++){
			cin >> tamanho[i] >> pe[i];			
		}
		for(int i = 0; i < qtd; i++){
			for(int j = (i+1); j < qtd; j++){
				if((tamanho[i] == tamanho[j]) && (pe[i] != pe[j])){
					tamanho[i] = 1;
					tamanho[j] = 1;
					pe[i] = 1;
					pe[j] = 1;
					soma++;
					break;
				}						
			}						
		}
		cout << soma << "\n";
	}

	return 0;
}
