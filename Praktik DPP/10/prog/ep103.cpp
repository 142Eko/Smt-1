#include <iostream>
using namespace std;
main(){
	int a[2];
	int b[2];
	int c[2];
	cout<<"Program hitung penjumlahan 2 buah deret\n";
	cout<<"\nDeret A\n";
	for(int i=0;i<2;i++){
		cout<<"Data A("<<i<<")=";cin>>a[i];
	}
	cout<<"\nDeret B\n";
	for(int i=0;i<2;i++){
		cout<<"Data B("<<i<<")=";cin>>b[i];
	}
	for(int i=0;i<2;i++){
		c[i]=a[i]+b[i];
	}
	cout<<"\nHasil penjumlahan deret\n";
	for(int i=0;i<2;i++){
		cout<<"C("<<i<<")=A("<<i<<")+B("<<i<<")= "<<a[i]<<" + "<<b[i]<<" = "<<c[i]<<endl;
	}
}
