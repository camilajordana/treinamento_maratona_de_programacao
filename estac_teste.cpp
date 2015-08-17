#include <iostream>
using namespace std;

int main() {
	int comprimento, ev, prec;
   	int plac, comp;
   	char sit;
   	int est[1001];
   	while(cin >> comprimento >> ev)	{
		for(int i = 0; i < comprimento; i++){
         		est[i] = 0;
		}
      		prec = 0;
      		while(ev-- > 0) {
         		cin >> sit;
         		if(sit == 'C'){
            			cin >> plac >> comp;
            			int vazio = 0;
            			for(int i = 0; i < comprimento; i++){
               				if(est[i] == 0){
                  				vazio++;
					}
               				if(vazio == comp){
                  				for(int k = i - comp + 1; k <= i; k++){ 
                     					est[k] = plac;
						}
                  				prec += 10;
                  				break;
               				}
               				if(est[i] != 0){
                 				vazio = 0;
					}
            			}
         		}else{
            			bool f = false;
            			cin >> plac;
            			for(int i = 0; i < comprimento; i++){
               				if(est[i] == plac){
                  				est[i] = 0;
                  				f = true;
               				}
               			else if(f)
                  		break;
            }
         }
      }
      cout << prec << endl;
   }
	return 0;
}
