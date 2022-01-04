#include <iostream>
using namespace std;

int main(){
	float jamkerja;
	float gajiperjam;
	
	cout << "masukan jam kerja : ";
	cin >> jamkerja;
	cout << "masukan gaji per jam : ";
	cin >> gajiperjam;
	
	float gajikotor = jamkerja * gajiperjam;
	float pajak = gajikotor * 10/100;
	float gajibersih = gajikotor - pajak;
	
	cout << endl <<"gaji bersih : " << gajibersih << endl;
}

