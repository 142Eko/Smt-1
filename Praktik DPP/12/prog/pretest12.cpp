#include <iostream>
using namespace std;
struct barang{
	string kode,nama;
	int hb,hj,stok;
};
main(){
	barang x;
	x.kode="123";
	x.nama="Buku Tulis";
	x.hb=1500;
	x.hj=2500;
	x.stok=12;
	cout<<"Kode		= "<<x.kode<<endl;
	cout<<"Nama		= "<<x.nama<<endl;
	cout<<"Harga beli	= "<<x.hb<<endl;
	cout<<"Harga jual	= "<<x.hj<<endl;
	cout<<"Stok		= "<<x.stok<<endl;	
}
