#include <iostream>
using namespace std;
int main(){
	struct biodata{
		char nama[30],hobi[40],asal[20],sekolah[30];
		int umur,status;
	};
	biodata bio;
	cout<<"Masukkan nama anda : ";
	cin.getline(bio.nama,30);
	
	cout<<"Masukkan hobi anda : ";
	cin.getline(bio.hobi,40);
	
	cout<<"Masukkan umur anda : ";
	cin>>bio.umur;
	
	cout<<"Masukkan kota asal anda : ";
	cin>>bio.asal;
	
	cout<<"Masukkan sekolah anda : ";
	cin>>bio.sekolah;	
	
	cout<<"Masukkan status anda(1 apabila single,2 apabila double) : ";
	cin>>bio.status;
	cout<<"\nData Kamu\n";
	cout<<"===========\n";
	cout<<"Nama saya "<<bio.nama<<".\n";
	cout<<"Hobi saya adalah "<<bio.hobi<<".\n";
	cout<<"Saya berusia "<<bio.umur<<".\n";
	cout<<"Saya berasal dari kota "<<bio.asal<<".\n";
	cout<<"Saya bersekolah di "<<bio.sekolah<<".\n";
	if(bio.status==1){
		cout<<"Saat ini saya masih single :(";
	}
	else{
		cout<<"Maaf,sudah ada yangpunya :)";
	}
	return 0;
}

