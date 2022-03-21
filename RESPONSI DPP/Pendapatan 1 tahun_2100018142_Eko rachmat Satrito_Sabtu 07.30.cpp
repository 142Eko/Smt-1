#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int a[12]={},b=0,jumlah = 0,z;
ofstream file;

void tambah()
{
    if (b<12)
    {
        jumlah = jumlah + a[b];
        cout<<"Bulan ke\tPendapatan\t Jumlah\n";
		cout<<b+1<<"\t\t"<<a[b]<<"\t\t "<<jumlah<<"\n";b++;
        tambah();
    }
}

int main()

{
	int b;
    for (b=0;b<=11;b++)
    {
        cout<<"Masukkan pendapatan bulan ke " << b+ 1 << ": ";
        cin>>a[b];
    }
    cout << endl;
    cout<<"Apakah anda ingin melihat slip gaji? (1|2)\n";
    cout<<"1 apabila ya,dan 2 tidak :";
    cin>>z;
    switch(z){
    	case 1:
    	tambah();
    	file.open("slip.txt",ios::app);
    	  if (b<12)
    	{
        jumlah = jumlah + a[b];
		file<<"Bulan ke\tPendapatan\t Jumlah\n";
		file<<b+1<<"\t\t"<<a[b]<<"\t\t "<<jumlah<<"\n";b++;
        tambah();
   		 }
   		file.close();
		break;
		case 2:
		cout<<"Akhir dari program ";	
   		}
   		getch();
   		return 0;
}
