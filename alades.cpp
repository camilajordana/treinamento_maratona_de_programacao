#include <iostream>
using namespace std;

int main(){
	int h1, m1, h2, m2, somam1, somam2;
	h1 = 1;
	m1 = 1;
	h2 = 1;
	m2 = 1;
	
	
	while((h1 != 0) || (m1 != 0) || (h2 != 0) || (m2 != 0)){
		cin >> h1 >> m1 >> h2 >> m2;
		if((h1 != 0) || (m1 != 0) || (h2 != 0) || (m2 != 0)){
			somam1 = 0;
			somam2 = 0;
		
			if(h1 == 0){
				somam1 = somam1 + (24*60) + m1;
			} else{
				somam1 = somam1 + (h1*60) + m1;
			}


			if(h2 == 0){
				somam2 = somam2 + (24*60) + m2;
			} else{
				somam2 = somam2 + (h2*60) + m2;
			}
		
		if(somam2 > somam1){
			cout << (somam2 - somam1) << "\n";
		} else if(somam2 < somam1){
			cout << ((24*60) - (somam1 - somam2)) << "\n";
		}
	
			
			
		
					
			
		}
	}

	return 0;
}
