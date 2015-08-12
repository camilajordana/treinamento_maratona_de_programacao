#include <iostream>
using namespace std;

int main(){
	int n;
	int soma = 0;
	int num_latas= 0;
	int num_copos=0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> num_latas >> num_copos;
		if(num_latas > num_copos){
	   		soma += num_copos;
		}
   	}

	cout << soma << "\n";
	return 0;
}
