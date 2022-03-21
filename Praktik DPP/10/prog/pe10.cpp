#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int main(){
	char cari,bilangan[10];
	int a,tot=0;
	cout<<"Program Mencari Bilangan Ganjil Genap\n";
	cout<<"======================================\n";
	cout<<"Masukkan Bilangan : ";
	gets(bilangan);
	cout<<"--------------------------------------\n";
	a=strlen(bilangan);//panjang string
	cout<<"\nMasukkan angka yang ingin anda cari : ";cin>>cari;
	cout<<"\n--------------------------------------\n";
	for(int i=0;i<a;i++){
		if(bilangan[i]==cari){
		cout<<"Angka "<<cari<<" ditemukan pada urutan ke-"<<i+1<<endl;
		tot+=1;			
		}

	}
	cout<<"======================================\n";
	if(tot!=0){
		cout<<"Angka "<<cari<<" berjumlah "<<tot;
	}
	else{
		cout<<"Angka tidak ditemukan!!";
	}
	cout<<"\n======================================\n";
	if(cari%2==0){
		cout<<"Angka "<<cari<<" adalah genap";
	}
	else if(cari%2!=0){
		cout<<"Angka "<<cari<<" adalah ganjil";
	}
	getch();
	}
	

