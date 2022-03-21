#include <iostream>
using namespace std;
int main(){
	int c; float r,f;
	cout<<"--------------------------------\n";
	cout<<"Celcius \tReamur \t\tFahrenheit \n";
	for(c=1; c < 30;c++)
	cout<<"-";
	cout<<"\n";
	for(c=10; c < 100;c+=10)
	{
		r=c*10;
		f=c+32;
		cout<<c<<"\t\t"<<r<<"\t\t"<<f<<"\n";
	}
	for (c=1; c < 30;c++)
		cout<<"-";
	return 0;
}
