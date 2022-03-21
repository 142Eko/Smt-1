#include <iostream>
using namespace std;
//a=gaji tiap bulan
//b=bulan
int tambah(int a,int b){
	if (b>10){
		return 0;
	}
	else{
		cout<<"Masukkan gaji bulan ke "<<b<<"= ";
		cin>>a;
		cout<<endl;
		return(a+tambah(a,b+1));
	}
}
int main(){
	
	int a,b=1,jumlah=0;
	    if (b < 11)
    {
        jumlah = jumlah=jumlah+a;
        cout << "Pendapatan selama " << b + 1 << " bulan adalah " << jumlah << endl;
        b++;
        tambah(a,b);
    }
}

