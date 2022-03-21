#include <iostream>
using namespace std;
int main(){
	int nilai1=5,nilai2=15;
	int *p1,*p2;
	p1=&nilai1;
	p2=&nilai2;
	cout<<"Nilai awal"<<endl;
	cout<<"Nilai 1 adalah	= "<<nilai1<<endl;
	cout<<"Nilai 2 adalah	= "<<nilai2<<endl;
	
	*p1=10;
	cout<<"\nSetelah *p1	= 10"<<endl;
	cout<<"Nilai 1 adalah	= "<<nilai1<<endl;
	cout<<"Nilai 2 adalah	= "<<nilai2<<endl;
	
	*p2=*p1;
	cout<<"\nSetelah *p2	= *p1"<<endl;
	cout<<"Nilai 1 adalah	= "<<nilai1<<endl;
	cout<<"Nilai 2 adalah	= "<<nilai2<<endl;	
	
	p1=p2;
	cout<<"\nSetelah  p1	= p2"<<endl;
	cout<<"Nilai 1 adalah	= "<<nilai1<<endl;
	cout<<"Nilai 2 adalah	= "<<nilai2<<endl;
	
	*p1=30;
	cout<<"\nSetelah *p1	= 30"<<endl;
	cout<<"Nilai 1 adalah	= "<<nilai1<<endl;
	cout<<"Nilai 2 adalah	= "<<nilai2<<endl;	
	return 0;	
}
