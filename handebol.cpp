#include <iostream>

using namespace std;

int main(){

	int jogadores, qtd;
	cin >> jogadores >> qtd;
	int cont = 0;
	int cont2 = 0;
	int geral = 0;
	
	for(int i = 0; i < jogadores; i++){
		while(cont < qtd){
			int valor;
			cin >> valor;
			if(valor != 0){
				cont2++;
			}
			cont++;	
		}
		if(cont2 == qtd){
			geral++;
		}
		cont = 0;
		cont2 = 0;
	}

	cout << geral << "\n";	
	return 0;
}
