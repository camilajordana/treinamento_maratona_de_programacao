#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double v;
	int n, m;
	v = 1;
	n = 1;
	m = 1;
	
	while((v != 0) || (n != 0) || (m != 0)){
		cin >> v >>  n >> m;
		if((v != 0) || (n != 0) || (m != 0)){
			

			if((n%10000) == (m%10000)){
				cout << fixed << setprecision(2) << (v*3000) << "\n";
			}else if((n%1000) == (m%1000)){
				cout << fixed << setprecision(2) << (v*500) << "\n";
			} else if((n%100) == (m%100)){
				cout << fixed << setprecision(2) << (v*50) << "\n";
			}  
			else if((((n%100)/4) == ((m%100)/4)) && (((n%100)%4 != 0) && ((m%100)%4 != 0))){ 
				cout << fixed << setprecision(2) << (v*16) << "\n";
			} else if((((n%100)/4) - 1) == ((m%100)/4) && ((n%100)% 4 == 0 && (m%100)%4 != 0)){
				cout << fixed << setprecision(2) << (v*16) << "\n";
			} else if((((m%100)/4) - 1) == ((n%100)/4) && ((m%100)% 4 == 0 && (n%100)%4 != 0)){
				cout << fixed << setprecision(2) << (v*16) << "\n";
			}

			else{
				cout << "0.00\n";
			}
			
		}
	}
	return 0;
}
