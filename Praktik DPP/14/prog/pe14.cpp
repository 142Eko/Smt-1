#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
struct Input
{
		char ch[100];
      	float angka;
}obj1,obj2, obj3 ;
struct Hasil
{
      char nb;
	  float jb,hb,total;
}result; 
void input(Input obj1, Input obj2,Input obj3)
{
    
      ofstream dataInput1("Input1.txt");
      ofstream dataInput2("Input2.txt");
      ofstream dataInput3("Input3.txt");
      

      cout<<"\nMasukkan nama barang	: "; cin>>obj1.ch;
      cout<<"Masukkan jumlah barang	: "; cin>>obj2.angka;
      cout<<"Masukkan harga barang	: "; cin>>obj3.angka;
      
      

      //Menyimpan ke dalam FILE
      dataInput1.write((char *)&obj1, sizeof(obj1));
      dataInput2.write((char *)&obj2, sizeof(obj2));
	  dataInput3.write((char *)&obj3, sizeof(obj3));

      //menutup FILE
      dataInput1.close();
      dataInput2.close();
      dataInput3.close();
}

//fungsi untuk melakukan penghitungan
void hitung(Input obj2, Input obj3)
{
      //pendeklarasian variabel
      float x, y;
      Hasil result;

      ofstream dataHasil("Struk.txt");

      //ifstream : stream class untuk membaca FILE(Input1.txt)
      ifstream bukaInput1("Input1.txt");
      bukaInput1.read((char *)&obj1, sizeof(obj1));
      
	  ifstream bukaInput2("Input2.txt");
      bukaInput2.read((char *)&obj2, sizeof(obj2));

      //operasi penugasan, bil1 = nilai “data” pada obj1
      x = obj2.angka;

      ifstream bukaInput3("Input3.txt");
      bukaInput3.read((char *)&obj3, sizeof(obj3));

      //operasi penugasan, bil1 = nilai “data” pada obj2
      y = obj3.angka;

      //hasilnya disimpan dalam objek struct -> "result"
      
      result.total = x * y;
     

      //menulis hasil berupa objek ke dalam FILE
      dataHasil.write((char *)&result, sizeof(result));

      //menutup FILE
      bukaInput1.close();
      bukaInput2.close();
      bukaInput3.close();
      dataHasil.close();
}

//fungsi untuk menampilkan hasil
void hasil(Hasil result)
{
      ifstream bukaHasil("Struk.txt");
     
      /*membaca data berupa objek yang ada dalam FILE "Hasil.txt")*/
      bukaHasil.read((char *)&result, sizeof(result));
     
      //menampilkan hasil pengaksesan FILE
      cout<<"\nTotal Belanja anda adalah : "<<endl;
      cout<<"-------"<<endl;
      cout<<"Total   =Rp."<<result.total<<endl;
      //menutup FILE
      bukaHasil.close();
}

//fungsi main
int main()
{
	int op;
      cout<<"PROGRAM KASIR SEDERHANA"<<endl;
      cout<<"=================================="<<endl;
      cout<<"Pilih untuk memulai\n";
      cout<<"1.Input barang\n";
      cout<<"2.Output\n";
      cout<<"=================================="<<endl;
      cout<<"Pilih: ";
      cin>>op;
      
      input(obj1, obj2, obj3);
      hitung(obj2, obj3);
      hasil(result);
      
	  cout<<"\nPROGRAM KASIR SEDERHANA"<<endl;
      cout<<"=================================="<<endl;
      cout<<"Pilih untuk memulai\n";
      cout<<"1.Input barang\n";
      cout<<"2.Output\n";
      cout<<"=================================="<<endl;
      cout<<"Pilih: ";
      cin>>op;
      if(op==1){
      input(obj1, obj2, obj3);
      hitung(obj2, obj3);
      hasil(result);
	  }
	  else
	  {
	  	hasil(result);
	  	cout<<"Keluar program";
	  }
      _getche();
      return 0;
}
