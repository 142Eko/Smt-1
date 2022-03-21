#include <iostream>//untuk input&output stream
using namespace std;//agar tidak perlu menuliskan "std" saat menggunakan "cout"
int main(){//fungsi utama
	int umur;//untuk bilangan bulat
	cout<<"Masukkan umur (0-100) : ";//mengeluarkan "Masukkan umur (0-100) : " pada konsol
	cin>>umur;//memasukkan angka pada konsol
	if (umur>60){//jika umur>60 maka akan menampilkan baris 8
	cout<<"Lansia";}
	else if (30<umur && umur<=60){//jika 30<umur && umur<=60 maka akan menampilkan baris 10
	cout<<"Dewasa";}
	else if (17<umur && umur<=30){//jika 17<umur && umur<=30 maka akan menampilkan baris 12
	cout<<"Pemuda";}
	else if (12<umur && umur<=17){//jika 12<umur && umur<=17 maka akan menampilkan baris 14
	cout<<"Remaja";}
	else if (5<umur && umur<=12){//jika 5<umur && umur<=12 maka akan menampilkan baris 16
	cout<<"Anak-anak";}
	else if (3<umur && umur<=5){//jika 3<umur && umur<=5 maka akan menampilkan baris 18
	cout<<"Balita";}
	else if (1<umur && umur<=3){//jika 1<umur && umur<=3 maka akan menampilkan baris 20
	cout<<"Batita";}
	else if (0<=umur && umur<=1){//jika 0<=umur && umur<=1 maka akan menampilkan baris 22
	cout<<"Bayi";}

	return 0;//program selesai dengan normal
}	
