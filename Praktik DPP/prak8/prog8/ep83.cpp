#include <iostream>
#include <conio.h>
using namespace std;
//fungsi u mencetak garis dengan panjang n karakter
void cetakgaris(int n)
{ 
int i;
for(i=0;i<=n;i++)
cout<<"-";cout<<"\n";
}
main()
{
	cetakgaris(2);//pemanggilan fungsi
	getch();
}

