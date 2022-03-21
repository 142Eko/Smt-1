#include <iostream>
using namespace std;
main(){
	int jam,menit,detik;
	cout<<"\n\n===============================================\n\n";
	cout<<"\t\tKonversi Detik\n\n\n";
	cout<<"Masukkan Jumlah Detik : ",cin>>detik;
	jam=detik/3600;
	detik=detik-(3600*jam);
	menit=detik/60;
	detik=detik-(60*menit);
	cout<<"Hasil konversi adalah : "<<jam<<" jam "<<menit<<" menit "<<detik<<" detik\n\n";
	cout<<"\n\n===============================================\n\n";
	cout<<"\n\n\nEko_142_UAD\n\n";
	return 0;	
}
