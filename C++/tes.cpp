#include <iostream>
using namespace std;

int main(){
	int totalbelanja;
	float diskon = 0;
	float totalbayar = 0;
	
	cout << "masukan total belanja : ";
	cin >> totalbelanja;
	
	if (totalbelanja > 1000){
		diskon = totalbelanja * 10/100;
		cout << "anda mendapatkan diskon 10 persen, total belanja anda : ";
	}else{
		diskon = totalbelanja * 0/100;
		cout << "anda tidak mendapatkan diskon, total belanja anda : ";
	}
	if (totalbelanja > 2000){
		diskon=totalbelanja * 10/100;
		cout << "anda mendapatkan diskon 20 persen, total belanja anda : ";		
	}else{
		diskon=totalbelanja * 0/100;
	}
	
	totalbayar = totalbelanja - diskon;
	cout << totalbayar;
		
}
