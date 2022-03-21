#include <iostream>//untuk input&output stream
using namespace std;//agar tidak perlu menuliskan "std" saat menggunakan "cout"
int main(){//fungsi utama
	double a,t,v;//untuk operasi.Double agar desimal lebih banyak
	cout<<"Masukkan alas 	prisma= ";cin>>a;//mengeluarkan "Masukkan alas 	prisma= "pada konsol,dan user memasukkan nilai a
	cout<<"Masukkan tinggi 	prisma= ";cin>>t;//mengeluarkan "Masukkan tinggi 	prisma= "pada konsol,dan user memasukkan nilai t
	v=0.5*a*t*t;//rumus volume prissma segitiga
	cout<<"Volumenya adalah prisma= "<<v;///mengeluarkan Volumenya adalah prisma= " dari hasil operasi tadi(v)
	return 0;//program selesai dengan nilai kembalian
}
