#include <iostream>
using  namespace std;

int main(){
	
	float totalbelanja;
	float diskon = 0;
	float totalbayar = 0;
	
	cout << "masukan total belanja :";
	cin >> totalbelanja;
	if (totalbelanja>1000){
		diskon = totalbelanja * 10/100;;
		
		cout << "selamat anda mendapatkan diskon 10%" << endl;
	}else{
		diskon = totalbelanja * 1/100;
		cout << "selamat anda mendapatkan diskon 1%" << endl;
	}
	totalbayar = totalbelanja - diskon;
	cout << totalbayar;
	
	
}
