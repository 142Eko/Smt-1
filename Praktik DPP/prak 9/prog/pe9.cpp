#include <iostream>
using namespace std;

int a[10]={},b=0,jumlah = 0,z;

void tambah()
{
    if (b<10)
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
    for (b=0;b<=9;b++)
    {
        cout<<"Masukkan pendapatan bulan ke " << b+ 1 << ": ";
        cin>>a[b];
    }
    cout << endl;
 	 cout<<"Apakah anda ingin melihat slip gaji? (1|2)\n";
    cout<<"1 apabila ya,dan 2 tidak";
    cin>>z;
    switch(z){
    	case 1:
    	 tambah();	
	}
    tambah();
   
}
