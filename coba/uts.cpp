#include <iostream>//untuk input&output stream
using namespace std;//agar tidak perlu menuliskan "std" saat menggunakan "cout"
int main(){//fungsi utama
	int n;//bilbul untuk tinggi segitiga
	cout<<"##	PROGRAM C++ PIRAMIDA BINTANG	##";//mengeluarkan "##	PROGRAM C++ PIRAMIDA BINTANG	##" pada konsol
	cout<<"\n========================================";//mengeluarkan "\n========================================" pada konsol
	cout<<"\nInput tinggi segitiga= ";cin>>n;//mengeluarkan "\nInput tinggi segitiga= "pada konsol,lalu memasukkan nilai n
	for(int i=1;i<=n;i++){//(perulangan pertama)akan diulang hingga i<=n
		for(int j=n;j>i;j--){//(perulangan kedua)akan diulang hingga j>i
			cout<<" ";//sebagai spasi
		}
		for(int k=1;k<=(2*i-1);k++){//(perulangan kedua) akan diulang hingga k<=(2*i-1)
			cout<<"*";//mencetak hasil dari perulangan (1,2,3)
		}
		cout<<endl;//ganti baris apabila sudah dicetak (perulangan 123)
	}

}
//note= /n digunakan untuk ganti baris,tidak akan tercatat keluar
