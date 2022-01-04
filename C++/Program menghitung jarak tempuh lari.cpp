#include <iostream>
using namespace std;

int main(){
	int langkahpertama, langkahterakhir, langkahrata, lamalari, jam, menit;
	float hitungjarak;
	
	cout << "masukan langkah pertama : ";
	cin >> langkahpertama;
	cout << "masukan langkah terakhir :";
	cin >> langkahterakhir;
	
	langkahrata = (langkahpertama + langkahterakhir)/2;
	
	cout << "masukan jam   : ";
	cin >> jam;
	cout << "masukan menit : ";
	cin >> menit;
	
	lamalari = (jam*60)*menit;
	hitungjarak - lamalari * (langkahrata*2.5);
	cout << "jarak yang ditempuh adalah : ";
	cout << hitungjarak <<"feet";
}
