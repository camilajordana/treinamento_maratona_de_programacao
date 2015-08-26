#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){

	vector<double> valores(4);
	for(int i = 0; i < 4; i++){
		cin >> valores[i];
	}
	
	sort(valores.begin(), valores.end());
	
	if((valores[1]/valores[0] == valores[3]/valores[2]) && (valores[2]/valores[0] == valores[3]/valores[1])){
		cout << "S\n";
	} else {
		cout << "N\n";
	}

	return 0;
}
