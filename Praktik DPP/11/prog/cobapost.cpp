#include <iostream>
using namespace std;

int main(){
 int nBrs, nBrs2;
 int nKlm, nKlm2;
 int jumlah = 0;
 int cek=1;
 
 do{
    cout<<"Masukan jumlah baris Matrix 1 = ";cin>>nBrs;
    cout<<"Masukan jumlah kolom Matrix 1 = ";cin>>nKlm;
    cout<<"Masukan jumlah baris Matrix 2 = ";cin>>nBrs2;
    cout<<"Masukan jumlah kolom Matrix 2 = ";cin>>nKlm2;
    
    if(nKlm != nBrs2){
     cout<<"Matriks tidak dapat dikali, mohon ulangi..."<<endl;
     cout<<"( kolom matriks 1 tidak sama dengan baris matriks 2! )"<<endl;
     cek=0;
     }else{cek=1;}
     cout<<endl;
    }while(cek==0);
    
    int matrix [nBrs][nKlm];
    int matrix2 [nBrs][nKlm];
    int matrixHasil [nBrs][nKlm];
    
   
 for(int b=0; b<nBrs; b++){
        for(int k=0; k<nKlm; k++){
         cout<<"Matrix ke-1 baris "<<b+1<<" kolom "<<k+1<<": ";
         cin>>matrix[b][k];
     }
    }
    
    for(int b2=0; b2<nBrs2; b2++){
      
        for(int k2=0; k2<nKlm2; k2++){
         cout<<"Matrix ke-2 baris "<<b2+1<<" kolom "<<k2+1<<": ";
         cin>>matrix2[b2][k2];
     }
    }
    
    cout<<endl;
    cout<<"Matriks ke 1"<<endl;
    for(int cb=0; cb<nBrs; cb++){
        cout<<"[\t";
    
        for(int ck=0; ck<nKlm; ck++){
            cout<<matrix[cb][ck]<<"\t";
            
     }
     cout<<"]"<<endl;
    }
     
     cout<<endl;
     cout<<"Matriks ke 2"<<endl;
     for(int cb2=0; cb2<nBrs2; cb2++){
        cout<<"[\t";
    
        for(int ck2=0; ck2<nKlm2; ck2++){
            cout<<matrix2[cb2][ck2]<<"\t";
            
     }
     cout<<"]"<<endl;
    }
    
    for(int i = 0; i < nBrs; i++){
      for(int j = 0; j < nKlm2; j++){
        for(int k = 0; k <nBrs2; k++){
          jumlah = jumlah + matrix[i][k] * matrix2[k][j];
        }
        matrixHasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    
    cout<<endl;
    cout << "Hasil perkalian matriks: \n";
    for(int i = 0; i < nBrs; i++){
     cout<<"[\t";
      for(int j = 0; j < nKlm2; j++){
        cout << matrixHasil[i][j] << "\t";
      }
      cout<<"]";
      cout << endl;
    }

    
    return 0;
}
