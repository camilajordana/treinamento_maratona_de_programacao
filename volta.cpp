#include <iostream>
using namespace std;

int main(){
	
	int menor, maior, teste;
	int teste2 = 0;
	int cont = 0;
	cin >> menor >> maior;
	teste = maior - menor;
	while(teste2 < maior){
		teste2 = teste2+teste;
		cont++;	
	}

	cout << cont << "\n";
	return 0;
}
