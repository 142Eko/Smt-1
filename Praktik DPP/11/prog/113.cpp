#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	cout<<" Array Data Mahasiswa\n";
	cout<<"=========================\n";
	int n;
	cout<<"Jumlah Data=";cin>>n;
	string mahasiswa[n][3];
	for(int i=0;i<n;i++){
		cout<<"Data ke-"<<i<<endl;
		for(int j=0;j<3;j++){
			if(j==0){
			cout<<"Nim	=";
			cin>>mahasiswa[i][j];
			}
			else if(j==1){
			cout<<"Nama	=";
			cin>>mahasiswa[i][j];	
			}
			else if(j==2){
			cout<<"Prodi	=";
			cin>>mahasiswa[i][j];
			}
		}
	}
	cout<<"Data mahasiswa yang disimpan"<<endl;
	cout<<"=========================\n";
	cout<<"No. Nim		Nama	Prodi\n";
	for(int i=0;i<n;i++){
		cout<<i<<" "<<mahasiswa[i][0]<<"	"<<mahasiswa[i][1]<<"	"<<mahasiswa[i][2]<<endl;
	}
	getch();
}
