#include <iostream>
#include <fstream>
using namespace std;

class proses{
public : 
void hitung_tabungan(int subtotal[], int size){
  for(int i = 1; i <= size; i++){
    this->sisaperbulan = this->saku - subtotal[i];
    this->tot += subtotal[i];
    this->tabungan += this->sisaperbulan;
  }

  this->report(subtotal, size);
}



void report(int subtotal[], int size){
    cout<<"====================================="<<endl;
    cout<<"Pengeluaran Perbulan : "<<endl;
    for(int i = 1; i <= size; i++){
      cout<<"Bulan Ke-"<<i<<" : "<<subtotal[i]<<endl;
    }
    cout<<"====================================="<<endl;
    cout<<"Pengeluaran : "<<this->tot<<endl;
    cout<<"====================================="<<endl;
    cout<<"Tabungan : "<<this->tabungan<<endl;
}



private :
ifstream ambil_data;
ofstream tulis_data;

int tot=0;
int saku = 1000000;
int tabungan=0;
int sisaperbulan=0;
};
