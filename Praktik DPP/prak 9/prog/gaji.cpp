#include <iostream>
using namespace std;

int a[10] = {}, n = 0, jumlah = 0;

void tambah()
{
    if (n < 10)
    {
        jumlah = jumlah + a[n];
        cout << "Pendapatan selama " << n + 1 << " bulan adalah " << jumlah << endl;
        n++;
        tambah();
    }
}

int main()
{
    cout << "Total Pendapatan" << endl;
    for (int n = 0; n <= 9; n++)
    {
        cout << "Pendapatan bulan ke " << n + 1 << ": ";
        cin >> a[n];
    }
    cout << endl;
    tambah();
}




//aris
#include<iostream>
using namespace std;
// a = gaji tiap bulan
// b = bulan

int jumlah(int a, int b){
	if (b > 10){
	return 0;
	} 
	else{ 
	cout << "Masukkan gaji bulan ke-" << b << " = ";
	cin >> a;
	cout << endl;
	
	return (a + jumlah(a, b+1));
	}
}

int main(){
	int a , b = 1;
	cout << "Jumlah Gaji dalam 10 bulan =  " << jumlah(a,b);
}








