#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"Nilai A= ";cin>>a;
	cout<<"Nilai B= ";cin>>b;
	cout<<"nilai terbesar antara A dan B= "<<fmax(a,b)<<"\n";
	cout<<"nilai terkecil antara A dan B= "<<fmin(a,b)<<"\n";	
	cout<<"A pangkat B ("<<a<<"^"<<b<<")="<<pow(a,b)<<"\n";
	return 0;
}
