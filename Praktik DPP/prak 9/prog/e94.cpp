#include <iostream>
#include <conio.h>
using namespace std;
int jumlah_deret_genap(int a){
	if(a==0){
		return a;
	}
	else{
		if (a%2==0)
		return(a+jumlah_deret_genap(a-1));
		else
		return jumlah_deret_genap(a-1);
	}
}
main(){
	int n,hsl;
	cout<<"Nilai N= ";cin>>n;
	hsl=jumlah_deret_genap(n);
	cout<<"Jumlah Deret Bilangan Genap "<<n<<" = "<<hsl;
}
