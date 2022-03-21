#include <iostream>
#include <conio.h>
using namespace std;
void sum(float a,float b){
	cout<<"Hasil dari "<<a<<" + "<<b<<" = "<<a+b;
}
void min(float a,float b){
	cout<<"Hasil dari "<<a<<" - "<<b<<" = "<<a-b;
}
void div(float a,float b){
	cout<<"Hasil dari "<<a<<" : "<<b<<" = "<<a/b;
}
void ping(float a,float b){
	cout<<"Hasil dari "<<a<<" x "<<b<<" = "<<a*b;
}
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
	if(n==1){sum(a,b);}
	else if(n==2){min(a,b);
	}
	else if(n==3){div(a,b);
	}
	else if(n==4){ping(a,b);
	}
	}
