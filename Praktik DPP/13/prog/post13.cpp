#include <iostream>
using namespace std;
int main(){
	int x=8;
	int *p1;
	int **p2;
	p1=&x;
	p2=&p1;
	cout<<"Nilai x		= "<<x<<endl;	
	cout<<"Nilai x		= "<<*p1<<endl;
	cout<<"Nilai x		= "<<**p2<<endl;
}
