#include <iostream>
using namespace std;
int main(){

	int nilai;
	string grade;
	
	cout << "=== program grenade nilai ===" << endl;
	cout << "input nilai akhir : ";
	cin >> nilai;
	
	//menggunakan percabangan if/else/if
	if (nilai >= 90){
		grade = "A";
	}
	else if (nilai >= 80){
		grade = "b";
	}
	else if ( nilai >= 70){
		grade = "c";
	}
	else if (nilai >= 60){
		grade = "d";
	}
	else if (nilai >= 50){
		grade = "e";
	}
	else if (nilai >= 40){
		grade = "f";
	}
	cout << "=== grade anda : ===" << grade << endl;
	
	return 0;
}
