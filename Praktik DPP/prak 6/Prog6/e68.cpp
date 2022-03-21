#include<iostream>
using namespace std;
int main()
{
	int n;
	while(true)
	{
		cout<<"Masukkan angka = ";
		cin>>n;
		if(n%2==0)
		continue;
		if(n%3==0)
		break;
		cout<<"\tAkhir dari perulangan. \n";
	}
	cout<<"\tDi luar perulangan. \n";
	return 0;
}
