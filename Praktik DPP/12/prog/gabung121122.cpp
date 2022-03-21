#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
struct mahasiswa read();
struct mahasiswa{
	char nama[100];
	int id;
};
void display(mahasiswa mhs){

	cout<<"Nama	: "<<mhs.nama<<endl;
	cout<<"ID	: "<<mhs.id;
}
int main(){
	struct mahasiswa ab;
	ab=read();
	display(ab);
	getch;
}
struct mahasiswa read(){
	struct mahasiswa s1;
	cout<<"Masukkan Nama	: ";
	gets(s1.nama);
	cout<<"Masukkan ID	: ";
	cin>>s1.id;
	cout<<endl;
	return s1;
}
