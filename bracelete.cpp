#include <iostream>
#include <string>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int qtd = 0;
	cin >> qtd;
	for(int h = 0; h < qtd; h++){
	string p1 = "";
	string p2 = "";
	cin >> p1 >> p2;
	int repetir = 0;
	int cont = 0;
	//int validar = 0;
	bool verificar = false;
	while(repetir < 2 && verificar == false){
		for(int j = 0; j < p2.size(); j++){
			if(p2[j] == p1[cont]){
				//cout << p1[cont] << " " << p2[j] << " - ";
				//validar++;
				cont++;
			} else{
				cont = 0;
				//validar = 0;
			}
			if(cont == p1.size()){
				verificar = true;
				break;
			} else {
				verificar = false;
			}
			
		}
		repetir++;
	}

	repetir = 0;
	cont = 0;
	//validar = 0;
	cont = 0;
	if(verificar == false){

		while(repetir < 2 && verificar == false){
		for(int j = p2.size()-1; j >= 0 ; j--){
			if(p2[j] == p1[cont]){
				//validar++;
				cont++;
			} else{
				cont = 0;
				//validar = 0;
			}
			if(cont == p1.size()){
				verificar = true;
				break;
			}else {
				verificar = false;
			}
			
		}
		repetir++;
	}
		
	}

	if(verificar == false){
		cout << "N\n";
	} else {
		cout << "S\n";
	}
		
	}
	return 0;
}
