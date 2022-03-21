//eko5-2
#include <iostream>
using namespace std;
int main(){
	int x;
	cout<<"Input	:Nilai x = ";
	cin>>x;
	if (x % 2 == 0)	
		cout<<"Output	:Genap";
	else
		cout<<"Output	:Ganjil";
	cout<<"\nNilai modulus adalah "<<x % 2;
	return 0;
}
