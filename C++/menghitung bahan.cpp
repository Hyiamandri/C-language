#include <iostream>
using namespace std;

int main(){
    int jumlahcelana;
        string ukurancelana;
	    float hasil, ukuranbahan;
	
    	cout << "JUMLAH CELANA : ";
    	cin >> jumlahcelana;
    	cout << "UKURAN CELANA (s/m/l/xl) : ";
    	cin >> ukurancelana;
    	cout << endl;
	
    	if(ukurancelana=="s") ukuranbahan = 1;	
    	else if (ukurancelana== "m") ukuranbahan = 1.18;	
    	else if (ukurancelana== "l") ukuranbahan = 1.35;
    	else if (ukurancelana =="xl") ukuranbahan = 1.55;
    	else ukuranbahan =0;
		
    	hasil=jumlahcelana*ukuranbahan;
	
	    cout << "JUMLAH KAIN YANG DI PERLUKAN"<< endl;	
	    cout << "jumlah celana : " << jumlahcelana << endl;	  
	    cout << "ukuran bahan  : " << ukuranbahan <<" m"<< endl;
	cout << "hasil : " << hasil;
}
