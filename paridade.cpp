#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
	unsigned long i = 1;
	unsigned long c;
	int cont = 0;
	string resultado = "";
	string resultado2 = "";

	string outro = "";
	
	while(i != 0){
		cin >> i;
		resultado2 = "";	
		resultado = "";	
		outro = "";
		
		
		if(i != 0){
			
			while(i!=0){
				

				c = i%2;
				i = i/2;
				stringstream convert;
				convert << c;
				outro = convert.str();
				resultado = resultado + outro;
				if(c == 1){
					cont++;
				}


			}
		for(int j = (resultado.size() - 1); j >= 0; j--){
			resultado2 = resultado2+ resultado[j];
			
		}
		i = 1;
		cout << "The parity of " << resultado2 << " is " << cont << " (mod 2).\n"; 
		cont = 0;
		}
	}
	return 0;
}
