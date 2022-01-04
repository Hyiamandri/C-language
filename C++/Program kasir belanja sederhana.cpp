#include <iostream>
using namespace std;

int main(){
	int totalbelanja;
	float diskon = 0;
	float totalbayar = 0;
	
	cout << " masukan total belanja : ";
	cin >> totalbelanja;
	
	if (totalbelanja >= 5000){
		
		diskon=totalbelanja * 30/100;
		cout << "anda mendpatkan diskon sebesar 10 persen, total belanja anda : Rp. ";	
	
	}else if (totalbelanja >= 2000){
			
		diskon=totalbelanja *20/100;
		cout << "anda mendapatkan diskon sebesar 20 persen, total belanja anda : Rp. ";
	}
	else if (totalbelanja >= 1000){
		
		diskon=totalbelanja * 10/100;
		cout << " Anda mendapatkan diskon sebesar 30 persen, totalbelanja anda : Rp. ";
	}
	else{
		diskon=totalbelanja * 0/100;
		cout << "anda tidak mendapatakan diskon, total belanja anda : Rp. ";
	}
		
	totalbayar=totalbelanja-diskon;
	cout << totalbayar;
}
