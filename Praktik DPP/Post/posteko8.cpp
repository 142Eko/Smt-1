#include "pe82.h"
int main(){
	float a,b;
	int n;
	cout<<"PROGRAM KALKULATOR\n";
	cout<<"Menu Operasi :\n";
	cout<<"	1.Penambahan\n";
	cout<<"	2.Pengurangan\n";
	cout<<"	3.Perkalian\n";
	cout<<"	4.Pembagian\n";
	cout<<"Pilih Menu no: ";cin>>n;"\n";
	cout<<"Bilangan Pertama : ";cin>>a;"\n";
	cout<<"Bilangan Kedua : ";cin>>b;"\n";	
	if(n==1){sum(a,b);cout<<"Hasil dari "<<a<<" + "<<b<<" = "<<a+b;}
	else if(n==2){min(a,b);cout<<"Hasil dari "<<a<<" - "<<b<<" = "<<a-b;
	}
	else if(n==3){ping(a,b);cout<< "Hasil dari "<<a<<" x "<<b<<" = "<<a*b;
	}
	else if(n==4){div(a,b);cout<<"Hasil dari "<<a<<" : "<<b<<" = "<<a/b;
	}
	}
