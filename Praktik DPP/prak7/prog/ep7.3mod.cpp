#include <iostream>
using namespace std;
int main()
{
	int i,j,k,l,n=5,m;
	int a,b,c,d,e;
	for(i = n; i > 0; i--)
	{
		a = i - 1;
		for(j = 1; j <= a; j++)
		{
			cout<<" ";
		}
		b = n - a;
		for(k = 1; k <= b; k++)
		{
			cout<<k;
		}
		c = b - 1;
		for(l = c; l >= 1; l--)
		{
			cout<<l;
		}
		cout<<endl;
	}
	m = n - 1;
	for(i = m; i > 0; i--)
	{
		d = n - i;
		for(j = 1; j <= d; j++)
		{
			cout<<" ";
		}
		for(k = 1; k <= i; k++)
		{
			cout<<k;
		}
		e = i - 1;
		for(l = e; l >= 1; l--){
			cout<<l;
		}
		cout<<endl;
	}
	return 0;
}
