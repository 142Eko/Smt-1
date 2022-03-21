#include <iostream>
using namespace std;
int main(){
	int sawal;
	double c,f,k;
	cout<<"\t\t==========================================\n";
	cout<<"\t\tPROGRAM KONVERSI TEMPERATUR (SUHU) EKO_142\n";
	cout<<"\t\t==========================================\n";
	cout<<"\t\t(1)Celcius\n";
	cout<<"\t\t(2)Fahrenheit\n";
	cout<<"\t\t(3)Kelvin\n";
	cout<<"\t\tPilih Suhu Awal (1,2,3) = ";
	cin>>sawal;//input 1
	cout<<"\t\t==========================================\n";
	if (sawal==1){
	cout<<"\t\tMasukan Besanya Suhu awal = ";
	cin>>c;//input celci
	k=c+273.15;
	f=(c*1.8)+32;
	cout<<"\n\t\t"<<c<<" derajat C sama dengan ",cout<<f<<" derajat F";
	cout<<"\n\t\t"<<c<<" derajat C sama dengan ",cout<<k<<" derajat K";
	cout<<"\n\t\t==========================================\n";}
	else if (sawal==2){
	cout<<"\t\tMasukan Besanya Suhu awal = ";
	cin>>f;//input fahre
	c=(f-32)*5/9;
	k=((f-32)+273.15)*5/9;
	cout<<"\n\t\t"<<f<<" derajat F sama dengan ",cout<<c<<" derajat C";
	cout<<"\n\t\t"<<f<<" derajat F sama dengan ",cout<<k<<" derajat K";
	cout<<"\n\t\t==========================================\n";}
	else if (sawal==3){
	cout<<"\t\tMasukan Besanya Suhu awal = ";
	cin>>k;//input kel
	c=k-273.15;
	f=((k-273.15)*1.8)+32;
	cout<<"\n\t\t"<<k<<" derajat K sama dengan ",cout<<c<<" derajat C";
	cout<<"\n\t\t"<<k<<" derajat K sama dengan ",cout<<f<<" derajat F";
	cout<<"\n\t\t==========================================\n";}			
	return 0;
}
