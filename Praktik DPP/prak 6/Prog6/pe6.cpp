#include <iostream>
using namespace std;
int main()
{
	int op;
	char rep;
	double a,b,c,f,k;
	do
	{	
	cout<<"\t\t==========================================\n";
	cout<<"\t\tPROGRAM KONVERSI TEMPERATUR (SUHU) EKO_142\n";
	cout<<"\t\t==========================================\n";
	cout<<"\t\t(1) Konversi dari C ke F\n";
	cout<<"\t\t(2) Konversi dari C ke K\n";
	cout<<"\t\t(3) Konversi dari F ke C\n";
	cout<<"\t\t(4) Konversi dari F ke K\n";
	cout<<"\t\t(5) Konversi dari K ke C\n";
	cout<<"\t\t(6) Konversi dari K ke F\n";
	cout<<"\t\t(y) Keluar\n";
	
	cout<<"\t\tPilih Suhu Awal = ";
	cin>>op;
	
	cout<<"\t\t==========================================\n";
	switch(op){
		case 1:
			cout<<"\t\tMasukkan batas bawah : ",cin>>b;
			cout<<"\t\tMasukkan batas atas : ",cin>>a;
			cout<<"\t\tC \t\tF \n";
		for(c= b; c <= a;c++)
		{
			f=c+32;
			cout<<"\t\t"<<c<<"\t\t"<<f<<"\n";
		}
			break;
		case 2:
			cout<<"\t\tMasukkan batas bawah : ",cin>>b;
			cout<<"\t\tMasukkan batas atas : ",cin>>a;
			cout<<"\t\tC \t\tK\n";
		for(c= b; c <= a;c++)
		{
			k=c+273.15;
			cout<<"\t\t"<<c<<"\t\t"<<k<<"\n";
		}
			break;
		case 3:
			cout<<"\t\tMasukkan batas bawah : ",cin>>b;
			cout<<"\t\tMasukkan batas atas : ",cin>>a;
			cout<<"\t\tF \t\tC \n";
		for(f= b; f <= a;f++)
		{
			c=(f-32)*5/9;
			cout<<"\t\t"<<f<<"\t\t"<<c<<"\n";
		}
			break;
		case 4:
			cout<<"\t\tMasukkan batas bawah : ",cin>>b;
			cout<<"\t\tMasukkan batas atas : ",cin>>a;
			cout<<"\t\tF \t\tK \n";
		for(f= b; f <= a;f++)
		{
			k=((f-32)+273.15)*5/9;
			cout<<"\t\t"<<f<<"\t\t"<<k<<"\n";	
		}
			break;
		case 5:
			cout<<"\t\tMasukkan batas bawah : ",cin>>b;
			cout<<"\t\tMasukkan batas atas : ",cin>>a;
			cout<<"\t\tK \t\tC\n";
		for(k= b; k <= a;k++)
		{
			c=k-273.15;
			cout<<"\t\t"<<k<<"\t\t"<<c<<"\n";
		}
			break;
		case 6:
			cout<<"\t\tMasukkan batas bawah : ",cin>>b;
			cout<<"\t\tMasukkan batas atas : ",cin>>a;
			cout<<"\t\tK \t\tF\n";
		for(k= b; k <= a;k++)
		{
			f=((k-273.15)*1.8)+32;
			cout<<"\t\t"<<k<<"\t\t"<<f<<"\n";
		}		
			break;
		default:
			cout<<"Input salah\n";
		}
		cout<<"\t\tKeluar (y|t)? :",cin>>rep;
		cout<<"\n";
	}
	while(rep!='y');
	cout<<"\t\tTerimakasih...";
	cout<<"\n";
		return 0;
}
