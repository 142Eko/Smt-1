//eko5-1
#include <iostream>
using namespace std;
int main(){
	const float LIMIT = 100.0;
	int idMobil;
	float kecepatan;
	cout<<"\nMasukkan nomor mobil 	: ";
	cin>>idMobil;
	cout<<"\n";
	cout<<"\nKecepatan mobil 	: ";
	cin>>kecepatan;
	cout<<"\n";
	if (kecepatan > LIMIT)
	cout<<"Mobil "<<idMobil<<" melebihi batas kecepatan.\n";
	cout<<"Akhir dari output program.\n";
	return 0;
	}
	
