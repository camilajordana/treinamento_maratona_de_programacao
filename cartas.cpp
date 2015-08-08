#include <iostream>
using namespace std;

int main(){

	int n1, n2, n3, n4, n5;
	n1 = 0;
	n2 = 0;
	n3 = 0;
	n4 = 0;
	n5 = 0;
		cin >> n1 >> n2 >> n3 >> n4 >> n5;


		if((n1 < n2) && (n2 < n3) && (n3 < n4) && (n4 < n5)){
			cout << "C\n";
		} else if((n1 > n2) && (n2 > n3) && (n3 > n4) && (n4 > n5)){
			cout << "D\n";
		} else {
			cout << "N\n";
		}

return 0;
}
