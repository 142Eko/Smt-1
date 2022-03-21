#include <iostream>
using namespace std;
int main(){
	int number;
	cout<<"Masukkan bilangan integer positif\n";
	cin>>number;
	switch(number){
		case 1:
		cout<<"One !!";
		break;
		case 2:
		cout<<"Two !!";
		break;
		case 3:
		cout<<"Three !!";
		break;
		case 4:
		cout<<"Papat !!";
		break;
		case 5:
		cout<<"Limo !!";
		break;
		case 6:
		cout<<"Enem !!";
		break;
		case 7:
		cout<<"Pitu !!";
		break;
		case 8:
		cout<<"Wolu !!";
		break;
		case 9:
		cout<<"Songo !!";
		break;
	    default:
	    cout<<"Others";
	    break;
	}
	return 0;
}
