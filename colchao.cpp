#include <iostream>
using namespace std;

int main(){

	int a, b, c, h, l, soma;
	a = 0;
	b = 0;
	c = 0;
	h = 0;
	l = 0;
	soma = 0;
	cin >> a >> b >> c >> h >> l;
	int menor1, menor2;
	
	menor1 = 0;
	menor2 = 0;
	if(a <= b && a <= c){
		menor1 = a;
		if(b <= c){
			menor2 = b;
		} else{
			menor2 = c;
		}
	}
	if(b <= a && b <= c){
		menor1 = b;
		if(a <= c){
			menor2 = a;
		} else {
			menor2 = c;
		}
	}
	if(c <= a && c <= b){
		menor1 = c;
		if(a <= b){
			menor2 = a;
		} else{
			menor2 = b;
		}
	}


	if(h < l){
		if(h >= menor1 && l >= menor2){
			cout << "S\n";
		} else {
			cout << "N\n";
		}
	} else {
		if(l >= menor1 && h >= menor2){
			cout << "S\n";
		} else {
			cout << "N\n";
		}
	}


	return 0;
}
