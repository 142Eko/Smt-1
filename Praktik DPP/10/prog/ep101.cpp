#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int i,tot,jum_mhs[7]={10,20,30,40,50,60,70};
	tot=0;
	for(i=1;i<7;i++){
		cout<<"Jumlah Mahasiswa Kelas "<<i<<": "<<jum_mhs[i]<<endl;
		tot+=jum_mhs[i];
	}
	cout<<"\nJumlah Total Mahasiswa = "<<tot;
	getch();
}
