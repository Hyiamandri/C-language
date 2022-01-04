#include <iostream>
using namespace std;
int main(){
    float angka1;
    float angka2;
    cout << "masukan angka 1 : ";
    cin >> angka1 ;
    cout << "masukan angka 2 : ";
    cin >> angka2;

    float hasiljumlah = angka1 + angka2;
    float hasilkurang = angka1 - angka2;
    float hasilkali   = angka1 * angka2;
    float hasilbagi   = angka1 / angka2;
     
    
    cout << endl <<"hasil jumlah :" << hasiljumlah << endl;
    cout << endl <<"hasil kurang :" << hasilkurang << endl;
    cout << endl <<"hasil kali : " << hasilkali << endl;
	cout << endl <<"hasil bagi : " << hasilbagi << endl; 

}
