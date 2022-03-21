#include <iostream>
using namespace std;
int main(){
	int x,*y;
	y=new int;
	x=15;
	*y=22;
	cout<<"Nilai x		= "<<x<<endl;
	cout<<"Alamat memori x	= "<<&x<<endl;
	cout<<"Nilai y		= "<<*y<<endl;
	cout<<"Alamat memori y	= "<<y<<endl;
	delete y;
	cout<<"\nSetelah di-delete,nilai y adalah	= "<<*y<<endl;
	cout<<"Alamat memori y adalah			= "<<y<<endl;
	return 0;
}
