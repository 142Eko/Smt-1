#include <iostream>
using namespace std;
struct buku{
	char judul[100],penulis[100],penerbit[100];
	int kode,harga;
};
main(){
	int n;
	cout<<"Masukkan Jumlah Buku: ";
	cin>>n;
	buku m[n];
	for(int i=0;i<n;i++){
		cout<<"Data buku ke-"<<i+1<<endl;
		cout<<"Masukkan Judul Buku	: ";
		cin.ignore();
		cin.getline(m[i].judul,100);
		
		cout<<"Masukkan Penulis	: ";
		cin.getline(m[i].penulis,100);
		
		cout<<"Masukkan Penerbit	: ";
		cin.getline(m[i].penerbit,100);
		
		cout<<"Masukkan Kode Buku	: ";
		cin>>m[i].kode;
		
		cout<<"Masukkan Harga Buku 	: RP.";
		cin>>m[i].harga;
		
		cout<<"\n";
		
	}
	cout<<"==================================\n";
	for(int i=0;i<n;i++){
		cout<<"Data buku ke-"<<i+1<<endl;
		cout<<"Judul Buku	: "<<m[i].judul<<endl;
		cout<<"Penulis		: "<<m[i].penulis<<endl;
		cout<<"Penerbit	: "<<m[i].penerbit<<endl;
		cout<<"Kode buku	: "<<m[i].kode<<endl;
		cout<<"Harga buku	: "<<m[i].harga<<endl;
		cout<<"==================================\n";
	}
	return 0;
}
