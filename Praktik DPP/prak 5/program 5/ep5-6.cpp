#include <iostream>
using namespace std;
int main(){
	int skor;
	cout<<"Masukkan skormu (0-100) : ";
	cin>>skor;
	switch(skor/10){
		case 10:
		case 9: cout<<"Nilaimu adalah A";
		break;
		case 8: cout<<"Nilaimu adalah B";
		break;
		case 7: cout<<"Nilaimu adalah C";
		break;
		case 6: cout<<"Nilaimu adalah D";
		case 5: cout<<"Nilaimu adalah E";
		break;
		case 4:
		case 3:
		case 2:
		case 1:
		case 0: cout<<"Nilaimu adalah F";
		break;
	}
	return 0;
}
