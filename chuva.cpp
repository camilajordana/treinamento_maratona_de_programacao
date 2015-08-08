#include <iostream>

using namespace std;

int main(){
	int n = 1;
	int v1, v2, cont;
	v1 = 1;
	v2 = 1;
	cont = 0;
	cin >> n;
	int meuarray[n*2][n];
	int resultado[n][n];

	for(int i = 0; i < n*2; i++){
		for(int j = 0; j < n; j++){
			cin >> meuarray[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			resultado[i][j] = 0;
		}
	}


	for(int i = 0; i < n*2; i++){
		for(int j = 0; j < n; j++){
			if(cont == n){
				cont=0;
			}
			if(cont < n){
				resultado[cont][j] = resultado[cont][j] + meuarray[i][j];
				
			}
		}
		
		cont++;
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << resultado[i][j] <<" ";
		}
			cout <<"\n";
	}
	
	return 0;
}
