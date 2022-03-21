#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	cout<<"Masukkan bilangan positiff: ";
	cin>>n;
	long total = 1;
	while (true)
	{
		if (i>n)
			break;
		total *=(i++);
	}
	cout<<"Perkalian dari "<<n<<" bilangan pertama adalah "<<total;
	return 0;
}
