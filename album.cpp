#include <iostream>
using namespace std;

int main(){
	long a1, a2, b1, b2, c1, c2;

	cin >> a1 >> a2;
	cin >> b1 >> b2;
	cin >> c1 >> c2;
	bool teste = false;

	if((a1 >= (b1+c1)) && (teste == false)){
		if(a2 >= b2 && a2 >= c2){
			teste = true;
		}
	}  
	if((a1 >= (b1+c2)) && teste == false){
		if(a2 >= b2 && a2 >= c1){
			teste = true;
		}
	} 
	if((a1 >= (b2+c1)) && teste == false){
		if(a2 >= b1 && a2 >= c2){
			teste = true;
		}
	} 
	if((a1 >= (b2+c2)) && teste == false){
		if(a2 >= b1 && a2 >= c1){
			teste = true;
		}
	}
	if((a2 >= (b1+c1)) && teste == false){
		if(a1 >= b2 && a1 >= c2){
			teste = true;
		}
	} 
	if((a2 >= (b1+c2)) && teste == false){
		if(a1 >= b2 && a1 >= c1){
			teste = true;
		}
	} 
	if((a2 >= (b2+c1)) && teste == false){
		if(a1 >= b1 && a1 >= c2){
			teste = true;
		}
	} 
	if((a2 >= (b2+c2)) && teste == false){
		if((a1 >= b1) && (a1 >= c1)){
			teste = true;
		}
	}





	if(teste == true){
		cout << "S\n";
	} else if(teste == false){
		cout << "N\n";
	}

return 0;
}
