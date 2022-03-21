#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int i,j,hasil [4] [2];
	int data[4][2];
	int data2[4][2];
	for(int x=0;x<4;x++){
		for(int y=0;y<2;y++){
			cout<<"Data["<<x<<"]["<<y<<"]= ";
			cin>>data[x][y];
		}
		cout<<endl;
	}
	for(int v=0;v<4;v++){
		for(int w=0;w<2;w++){
			cout<<"Data2["<<v<<"]["<<w<<"]= ";
			cin>>data2[v][w];
		}
		cout<<endl;
	}
	
	cout<<"Isi variabel data adalah\n";
	cout<<"------------------------\n";
	cout<<"Matriks 1 |		Matriks 2\n";
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
		hasil[i][j]=data[i][j]+data2[i][j];	
		cout<<"		"<<hasil[i][j]<<" ";		
		}
		cout<<endl;
	}
	getch();
}
