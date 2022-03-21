#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	cout<<"Pencarian Data Pada Array 2 Dimensi (MATRIX)\n";
	cout<<"=============================================\n";
	int a,b;
	cout<<"Masukkan jumlah baris : ";cin>>a;
	cout<<"Masukkan jumlah kolom : ";cin>>b;
	int ar[a][b];
	cout<<"Anda akan menggunakan Matrix "<<a<<"x"<<b<<endl;
	cout<<"=============================================\n";
	for(int i=0;i<=a-1;i++){
		for(int j=0;j<=b-1;j++){
			cout<<"Masukkan data baris ke-"<<i<<" kolom ke-"<<j<<" : ";cin>>ar[i][j];	
		}
		if(i==a-1){
			cout<<"=============================================\n";
		}
		else{
			cout<<"=============================================\n";
		}
	}
	cout<<"Model Matrix\n";
	for(int i=0;i<=a-1;i++){
		for(int j=0;j<=b-1;j++){
			cout<<ar[i][j]<<"\t";
		}
		cout<<endl;
	}
	int cari,tot=0;
	cout<<"Masukkan data yang ingin dicari : ";cin>>cari;
	cout<<"=============================================\n";
	for(int i=0;i<=a-1;i++){
		for(int j=0;j<=b-1;j++){
			if(ar[i][j]==cari){
				cout<<"Data"<<cari<<" ditemukan pada posisi ["<<i<<"]["<<j<<"]"<<endl;
				tot+=1;
			}
		}
	}
	cout<<"=============================================\n";
	if(tot!=0){
		cout<<"Data "<<cari<<"berjumlah "<<tot;
	}
	else{
		cout<<"Data "<<cari<<"tidak ditemukan!!! "<<tot;	
	}
	getch();
}
