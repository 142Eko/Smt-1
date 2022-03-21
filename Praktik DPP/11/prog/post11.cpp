#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	int jumlah=0;
	int t=1;
	int data[a][b];
	int data2[a][b];
	int hsl [a][b];
	cout<<"Masukkan ukuran matrix pertama[a][b]\n";
	cout<<"Masukkan a=";cin>>a;
	cout<<"Masukkan b=";cin>>b;
	cout<<"Anda akan menggunakan Matrix "<<a<<"x"<<b<<endl;
	cout<<"=============================================\n";
	cout<<"Masukkan ukuran matrix kedua[c][d]\n";
	cout<<"Masukkan c=";cin>>c;
	cout<<"Masukkan d=";cin>>d;
	cout<<"Anda akan menggunakan Matrix = "<<c<<"x"<<d<<endl;
	cout<<"=============================================\n";
	
	if(b!=c){
		cout<<"Matrix tidak dapat dikalikan,mohon samakan nilai(b=c)";
	}
	else{
	cout<<"Matriks pertama\n";
 	for(int b1=0; b1<a; b1++){
        for(int k=0; k<b; k++){
			cout<<"Data["<<b1<<"]["<<k<<"]= ";
			cin>>data[b1][k];
		}	
	}
	cout<<"=============================================\n";
	cout<<"Matriks kedua\n";
	for(int x=0;x<c;x++){
		for(int y=0;y<d;y++){
			cout<<"Data["<<x<<"]["<<y<<"]= ";
			cin>>data2[x][y];
		}	
	}
	cout<<"Matriks ke 1"<<endl;
    for(int cb=0; cb<a; cb++){
        cout<<"[\t";
    
        for(int ck=0; ck<b; ck++){
            cout<<data[cb][ck]<<"\t";
            
     }
     cout<<"]"<<endl;
    }
     
     cout<<endl;
     cout<<"Matriks ke 2"<<endl;
     for(int cb2=0; cb2<c; cb2++){
        cout<<"[\t";
    
        for(int ck2=0; ck2<d; ck2++){
            cout<<data2[cb2][ck2]<<"\t";
            
     }
     cout<<"]"<<endl;
    }
	for(int i=0;i<a;i++){
		for(int j=0;j<d;j++){
			for(int k=0;k<c;k++){
				jumlah=jumlah+data[i][k]*data2[k][j];
			}
			hsl[i][j]=jumlah;
			jumlah=0;
		}
	}
	cout<<endl;
	cout<<"Hasil perkalian matrix: \n";
	for(int i=0;i<a;i++){
		cout<<"[\t";
		for(int j=0;j<d;j++){
			cout<<hsl[i][j]<<"\t";
		}
		cout<<"]";
		cout<<endl;
	}
	}
	
	return 0;
}
