#include <algorithm> 
#include <iostream> 
#include <vector>  
#include <string> 
using namespace std;
	int main() {
		int qtd = 0;
		int numero = 0;
		cin >> qtd >> numero;
		vector<string> v;
		for(int i = 0; i < qtd; i++){
			string vetor;
			cin >> vetor;
			v.push_back(vetor); 
		}

    		sort(v.begin(),v.end());
		for(int i = 0; i < v.size(); i++){
			if((i+1) == numero){
				cout << v[i] << "\n";
			}
		}

	return 0;
}
