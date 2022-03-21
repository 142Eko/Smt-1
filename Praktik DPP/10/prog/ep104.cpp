#include <iostream>
using namespace std;
main(){
	char nama[4]={'a','g','u','s'};
	string alamat[5]{"Dukuh Sukahati","Kelurahan Damai","Kecamatan Tenangraya","Kabupaten Gunungkidul","Provinsi DIY"};
	cout<<"Nama=";
	for(int i=0;i<4;i++){
		cout<<nama[i];
	}
	cout<<"\nAlamat :\n";
	for(int i=0;i<5;i++){
		cout<<alamat[i]<<endl;
	}
}
