#include <iostream>
using namespace std;
int main()
{
	int i,j;
	int n=6;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<i;j++)//spasi
		{
			cout<<" ";
		}
		for(j=i;j<=n;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
}
