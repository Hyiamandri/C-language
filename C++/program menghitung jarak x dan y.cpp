#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	float x1;
	float y1;
	float x2;
	float y2;
	float z1, z2, jarak;
	
	cout << "masukan jarak x1 : ";
	cin >> x1;
	cout << "masukan jarak y1 : ";
	cin >> y1;
	cout << "masukan jarak x2 : ";
	cin >> x2;
	cout << "masukan jarak y2 : ";
	cin >> y2;
	
	z1 = (x1-x2)*(x1-x2);
	z2 = (y1-y2)*(y1-y2);
	jarak = sqrt(z1=z2);
	
	cout << endl << "hasil jarak adalah : " << jarak;
	
}
