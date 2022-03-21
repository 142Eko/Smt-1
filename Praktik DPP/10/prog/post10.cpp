#include <iostream>
using namespace std;
main(){
	int b;
	int cari,a[b];
	cout<<"Program Mencari Bilangan Ganjil Genap\n";
	cout<<"======================================\n";
	cout<<"Masukkan Jumlah Bilangan: ";
	cin>>b;
	for(int i=0;i<b;i++){
		cout<<"Bilangan ke-("<<i<<")=";cin>>a[i];}
	cout<<"\nMasukkan angka yang ingin anda cari : ";cin>>cari;
	cout<<"\n--------------------------------------\n";
	for(int i=0;i<b;i++){
	if(a[i]==cari){
	cout<<"Angka "<<cari<<" ditemukan pada urutan ke-"<<i+1<<endl;}}
	if(cari%2==0){
		cout<<"Angka "<<cari<<" adalah genap";
	}
	else if(cari%2!=0){
		cout<<"Angka "<<cari<<" adalah ganjil";
	}
}
