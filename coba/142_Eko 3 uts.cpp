#include <iostream>//untuk input&output stream
using namespace std;//agar tidak perlu menuliskan "std" saat menggunakan "cout"
int main()//fungsi utama
{
	int n,a;//untuk bilangan bulat
	cout<<"Masukkan nilai n : ";//mengeluarkan "Masukkan nilai n : " pada konsol
	cin>>n;//memasukkan nilai n pada konsol
	cout<<endl;//ganti baris(enter)
	cout<<"Hasil Pecahan"<<endl;//mengeluarkan "Hasil Pecahan" pada konsol,lalu ganti baris
	cout<<endl;//ganti baris(enter)
	cout<<"1/"<<2<<" ";//menampilkan 1/2 pada konsol
	for(a=3;a<=n;a++){//jika a=3 dan a<=n maka akan terus diulang dan ditambahkan 1 hingga a=n
		if(a%2==0){//jika hasil bagi 2 habis,menampilkan baris 14
			cout<<"- 1/"<<a<<" ";
		}
		else{//jika hasil bagi 2 tidak habis,menampilkan baris 17
			cout<<"+ 1/"<<a<<" ";
		}
	}
	return 0;///program selesai dengan normal
}
