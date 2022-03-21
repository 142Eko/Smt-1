#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main(){
	string barang;
	int p,jml,harga,tot1,tot,jml1=0,jq;
	int bayar,kembalian;
	ofstream file;
	
	input:
	system("cls");
	cout<<"=================================="<<endl;
	cout<<"PROGRAM KASIR SEDERHANA"<<endl;
      cout<<"=================================="<<endl;
      cout<<"Pilih untuk memulai\n";
      cout<<"1.Input barang\n";
      cout<<"2.Output\n";
      cout<<"=================================="<<endl;
      cout<<"Pilih: ";
      cin>>p;
    file<<"Nama\tJumlah\tHarga\n";
    switch(p){
    	case 1:
    		cin.ignore();
    		cout<<"Nama barang	: ";
    		getline(cin,barang);
    		cout<<"Jumlah		: ";
    		cin>>jml;
    		jq=jml;
    		cout<<"Harga satuan	: ";
    		cin>>harga;
    		tot=jml*harga;
    		tot1+=tot;
    		cout<<"Total	: "<<tot<<"\n\n";
    		jml1++;
    		file.open("struk.txt",ios::app);
    		file<<barang<<endl;
    		file<<jml<<"x "<<harga<<"						= \t"<<tot<<endl;
    		file.close();
    		system("cls");
    		goto input;
    		break;
    		
    	case 2:
    		file.open("struk.txt",ios::app);
    		file<<"========================================"<<endl;
    		file<<"Item\t"<<barang<<"Jumlah "<<jq;
			file<<" Total									=Rp."<<tot1<<endl;
    		bayar;
    		cout<<"Uang dibayar : ";
    		cin>>bayar;
    		if(bayar>tot1){
    		kembalian=bayar-tot1;
    		file<<"Tunai\t\tRp."<<bayar<<endl;
    		file<<"Kembalian\tRp."<<kembalian<<endl;
			cout<<"Akhir dari program\n";	
			}
			else if(bayar==tot1){
			file<<"Tunai\t\tRp."<<bayar<<endl;
    		file<<"Kembalian\tRp.0"<<kembalian<<endl;
    		cout<<"Akhir dari program\n";
			}
			else{
				cout<<"Uang anda kurang\n";
				cout<<"Akhir dari program\n";
			}
    		file.close();
	}
	getch();
	return 0;
}
