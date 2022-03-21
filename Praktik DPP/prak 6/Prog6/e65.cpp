#include<iostream>
using namespace std;
int main()
{
	char kata[11] = {'I','N','F','O','R','M','A','T','I','K','A'};
	int i = 10;
	while (kata[i] != 0)
	{
		cout<<kata[i]<<endl;
		i--;
	}
	return 0;
}
