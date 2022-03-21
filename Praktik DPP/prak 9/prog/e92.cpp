#include <iostream>
using namespace std;
int faktorial(int n);
int main(){
	int n;
	cout<<"Masukkan N= ";cin>>n;
	cout<<"Nilai factorial "<<n<<" adalah "<<faktorial(n)<<endl;
	return 0;
}
int faktorial(int n){
	int nilai=n;
	if(n==1){
		return nilai=n;
	}
	else{
		return (nilai*faktorial(n-1));
	}
}
