#include <iostream>
#include <vector>
using namespace std;

int main(){

	int n;
	cin >> n;
	int x = 1;
	int contador = 1;
	while(x != 0){
		if(x < (n/2)){
			x = x * 2+1;
		} else{
			x = 2*x - 2*(n/2);
		}

		
		contador++;
	}
	
	cout << contador << "\n";
	return 0;
}
