#include <iostream>
using namespace std;
int main(){
	double c,k,f,r;
	cout<<"\t\t=====Konversi suhu sederhana====\n\n";
	cout<<"Masukkan Suhu Celcius : ",cin>>c,"C/n";
	k=c+273.15;
	f=(c*1.8)+32;
	r=c*0.8;
	cout<<"\n===============================================================================\n\n";
	cout<<"\n\t\tHasil Konversi suhu sederhana\n\n";
	cout<<"Dari="<<c<<"C	Menjadi="<<k<<"K\n";
	cout<<"Dari="<<c<<"C	Menjadi="<<f<<"F\n";
	cout<<"Dari="<<c<<"C	Menjadi="<<r<<"R\n\n\n";
	cout<<"\n===============================================================================\n\n";
	cout<<"Eko_142_UAD\n";
	return 0;
}
