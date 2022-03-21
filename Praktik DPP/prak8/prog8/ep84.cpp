#include <iostream>
#include <conio.h>
using namespace std;
int luas(int x,int y){
	int hasil;
	return hasil = x*y;
}
float kll(int r){
	float keliling,phi=22/7;
	keliling=2*phi*r;
	return keliling;
}
void cetakgaris(int n){
	int i;
	cout<<"\n\n";
	for(i=0;i<=n;i++)
	cout<<"-";cout<<"\n";
}
int main(){
	int p=0,l=0;
	float K;
	cout<<"Menghitung luas Persegi 4"<<endl;
	cout<<"\nMasukkan panjang: ";cin>>p;
	cout<<"\nMasukkan lebar: ";cin>>l;
	cout<<endl<<"luas = "<<luas(p,l);//fungsi called
	cetakgaris(20);//fungsi called
	cout<<"\n\n";
	cout<<"Keliling lingkaran\n ";
	cout<<"masukkan r = ";cin>>l;
	K=kll(l);//fungsi called
	cout<<"Keliling lingkaran = "<<K;
	getch();
}
