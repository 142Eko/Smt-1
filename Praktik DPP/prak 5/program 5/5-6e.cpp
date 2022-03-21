#include <iostream>
using namespace std;
int main(){
	int skor;
	cout<<"Masukkan skormu (0-100) : ";
	cin>>skor;
	if (skor>=85){
	cout<<"NIilaimu adalah A";}
	else if (70<=skor && skor<85){
	cout<<"Nilaimu adalah B";}
	else if (55<=skor && skor<70){
	cout<<"NIlaimu adalah C";}
	else if (40<=skor && skor<55){
	cout<<"NIlaimu adalah D";}
	else if (skor<40){
	cout<<"NIlaimu adalah E";}
	return 0;
}
