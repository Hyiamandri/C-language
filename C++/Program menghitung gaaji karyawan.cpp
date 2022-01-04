#include <iostream>
using namespace std;

int main (){
	float gajibersih, honorlembur, gajilembur, gajipokok, totalgaji, pajak, jamlembur;
	cout << "|--------------------------------|";
	cout << "PROGRAM MENGHITUNG GAJIH KARYAWAN";
	cout << "|--------------------------------|" << endl;
	cout << "masukan jam lembur : ";
	cin >> jamlembur;
	cout << "masukan gaji pokok : ";
	cin >> gajipokok;
	cout << "masukan gaji lembur : ";
	cin >> gajilembur;
	
	if (jamlembur>40){
	honorlembur =  (gajilembur * jamlembur) * 1,5;	
	cout << "lama lembur > 40 jam, gaji bersih anda adalah : ";
	
   }else if (jamlembur<40){
   	     honorlembur = (gajilembur * jamlembur);
   	     cout << "lama lembur < 40 jam, gaji bersih anda adalah : ";  	     
   }
   	
 totalgaji = gajipokok + honorlembur;
 pajak = totalgaji * 15/100;
 gajibersih = totalgaji-pajak;
 cout << gajibersih;   

	
}
