#include <iostream>
using namespace std;
int main(){
	int *p;
	int x;
	p=&x;
	x=10;
	cout<<"Nilai x adalah	= "<<x<<endl;
	cout<<"Nilai *p adalah	= "<<*p<<endl;
	cout<<"Nilai p adalah	= "<<p<<endl;
	cout<<"Nilai &x adalah	= "<<&x<<endl;
	*p=22;
	cout<<"Nilai x adalah	= "<<x<<endl;
	cout<<"Nilai *p adalah	= "<<*p<<endl;
	cout<<"Nilai p adalah	= "<<p<<endl;
	cout<<"Nilai &x adalah	= "<<&x<<endl;
	return 0;
}
