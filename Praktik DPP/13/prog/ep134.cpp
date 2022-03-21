#include <iostream>
using namespace std;
int main(){
	int i=100;
	float f=3.25;
	double d=0.123;
	void *p=NULL;
	p=&i;
	cout<<"p menunjuk ke alamat i"<<endl;
	cout<<"Nilai *p	= "<<*((int*)p)<<endl;
	cout<<"Nilai  p	= "<<p<<"\n\n";
	p=&f;
	cout<<"p menunjuk ke alamat f"<<endl;
	cout<<"Nilai *p	= "<<*((float*)p)<<endl;
	cout<<"Nilai  p	= "<<p<<"\n\n";
	p=&d;
	cout<<"p menunjuk ke alamat d"<<endl;
	cout<<"Nilai *p	= "<<*((int*)p)<<endl;
	cout<<"Nilai  p	= "<<p<<"\n\n";
	return 0;
}
