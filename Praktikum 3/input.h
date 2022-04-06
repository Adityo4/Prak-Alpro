#include <iostream>
#include <fstream>
using namespace std;
class input{
public: 
  void cetak(){
    cout<<"---------MENU----------"<<endl;
    cout<<"1.  Ayam geprek:   21000"<<endl;
    cout<<"2.  Ayam goreng:   17000"<<endl;
    cout<<"3.  Udang goreng:  19000"<<endl;
    cout<<"4.  Cumi goreng:   20000"<<endl;
    cout<<"5.  Ayam bakar:    25000"<<endl;
    cout<<"Pesanan Ayam Geprek   : "; cin>>bnyk_aymGk;
    cout<<"Pesanan Ayam Goreng   : "; cin>>bnyk_ayamGr;
    cout<<"Pesanan Udang Goreng  : "; cin>>bnyk_udngGr;
    cout<<"Pesanan Cumi Goreng   : "; cin>>bnyk_cumiGr;
    cout<<"Pesanan Ayam Bakar   : "; cin>>bnyk_aymBk;
}
  void toFile(){
    tulis_data.open("api_data.txt");
    tulis_data<<bnyk_aymGk<<endl;
    tulis_data<<bnyk_ayamGr<<endl;
    tulis_data<<bnyk_udngGr<<endl;
    tulis_data<<bnyk_cumiGr<<endl;
    tulis_data<<bnyk_aymBk<<endl;
    tulis_data.close();
  }

private:
  ofstream tulis_data;
  int bnyk_aymGk;
  int bnyk_ayamGr;
  int bnyk_udngGr;
  int bnyk_cumiGr;
  int bnyk_aymBk;
};
