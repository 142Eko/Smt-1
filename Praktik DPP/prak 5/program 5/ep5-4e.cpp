#include <iostream>
using namespace std;
int main(){
	cout<<"Pilih angka dari 1 sampai 8."<<endl;
	char jawaban;
	cout<<"Apakah angkanya kurang dari 8 ? (y|t) : ";
	cin>>jawaban;
	if (jawaban == 'y')
	{
		cout<<"Apakah angkanya kurang dari 7 ? (y|t) : ";
		cin>>jawaban;
		if (jawaban == 'y')
		{
		cout<<"Aapakah angkanya kurang dari 6 ? (y|t)";
		cin>>jawaban;
		if (jawaban == 'y')
		cout<<"Apakah angkanya kurang dari 5? (y|t) : ";
		cin>>jawaban;
		if (jawaban == 'y')//1 <=n <=4
		{	
		cout<<"Apakah angkanya kurang dari 3? (y|t) : ";
		cin>>jawaban;
		if(jawaban == 'y')// 1 <=n <=2
		{
		cout <<"Apakah angka kurang dari 2? (y|t) : ";
		cin>>jawaban;
		if (jawaban == 'y')
			cout<<"Angkamu adalah 1."<<endl;
		else
			cout<<"Angkamu adalah 2."<<endl;
		}
		else // 3 <= n <= 4
		{
		cout<<"Apakah angkanya kurang dari 4? (y|t) : ";
		cin>>jawaban;
		if (jawaban == 'y')
			cout<<"Angkamu adalah 3."<<endl;
		else
			cout<<"Angkamu adalah 4."<<endl;	
		}	
	}
		}	
		else
		cout<<"Angkamu adalah 7";	
	}
	else
	cout<<"Angkamu adalah 8";
	return 0;
}
