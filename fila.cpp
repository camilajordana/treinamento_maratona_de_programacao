#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n = 0;
	int m = 0;
	ios_base::sync_with_stdio(false);
	cin >> n;
	vector<unsigned short> vetor(n);

	for (int i = 0; i < n; i++){
		cin >> vetor[i];
	}
	cin >> m;
	vector<unsigned short> vetor2(m);
	for (int i = 0; i < m; i++){
		cin >> vetor2[i];
		
	}
	

	for(int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if(vetor[i] == vetor2[j]){
				vetor[i] = 0;
				break;
			}
		}
		if(vetor[i] != 0){
			cout << vetor[i] << " ";
		}
	}


	cout << "\n";
	
	return 0;
}
