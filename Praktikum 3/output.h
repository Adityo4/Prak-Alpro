#include <iostream>
#include <fstream>
using namespace std;

class Output{
public:
void cetak(){
  cout << "  STRUK PEMBELIAN SEEFOOD\n";
  cout<<"------------------------------"<<endl;
  cout<<"yang dibeli: \n";
  cout<<"1.ayam Geprek  :"<<data_file[8]<<endl;
  cout<<"2.ayam Goreng  :"<<data_file[9]<<endl;
  cout<<"3.Cumi Goreng  :"<<data_file[10]<<endl;
  cout<<"4.Udang Goreng :"<<data_file[11]<<endl;
  cout<<"5.Ayam Bakar   :"<<data_file[12]<<endl;
  cout<<"==============================="<<endl;
  cout<<"Total Harga    :Rp."<<data_file[0]<<endl;
  cout<<"diskon         :RP."<<data_file[1]<<endl;
  cout<<"Total Harga	:Rp."<<data_file[2]<<endl;
  cout<<"Jarak delivery : "<<data_file[3]<<endl;
  cout<<"Ongkir         :Rp."<<data_file[4]<<endl;
  cout<<"Diskon Ongkir  :Rp."<<data_file[5]<<endl;
  cout<<"Harga Ongkir   :Rp."<<data_file[6]<<endl;
  cout<<"Harga Bayar    :Rp."<<data_file[7];
}
void getData(){
  ambil_data.open("api_data.txt");
  string t;
  while(!ambil_data.eof()){
   ambil_data>>data_file[index];
    index +=1;
  }
  ambil_data.close(); 
}
private:
ifstream ambil_data;
string data_file[30];
int index = 0;
};
