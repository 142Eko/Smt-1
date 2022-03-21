#include <iostream>
using namespace std;
int main(){
	double b,d,h;
	cout<<"Penghitung Pajak 15%\n\n";
	cout<<"Masukkan harga yang ingin dipajak	:	Rp.",cin>>b,"\n";
	d=0.15*b;
	h=b-d;
	cout<<"Jadi Harga Setelah dipajak adalah	:	Rp.",cout<<h;
}
