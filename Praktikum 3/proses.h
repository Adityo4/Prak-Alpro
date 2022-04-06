#include <fstream>
using namespace std;

class proses{
public :
	void cetal(){
		cout<<"masukan jarak pembeli : "; cin>>jarak;
	}
void getData(){
ambil_data.open("api_data.txt");
  bool ayam_geprek = true;
  bool ayam_goreng = true;
  bool udang_goreng = true;
  bool cumi_goreng = true;
while(!ambil_data.eof()){ 
  if (ayam_geprek){
  ambil_data>>bnyk_aymGk;
  ayam_geprek = false;
    }
  else if(ayam_goreng){
    ambil_data>>bnyk_ayamGr;
    ayam_goreng = false;
  }
  else if(udang_goreng){
    ambil_data>>bnyk_udngGr;
    udang_goreng = false;
  }
  else if(cumi_goreng){
    ambil_data>>bnyk_cumiGr;
    cumi_goreng = false;
  }
  else{
    ambil_data>>bnyk_aymBk;
  }
}
    ambil_data.close();
  }
void toFile(){
  
    int total = (harga_aymGk * bnyk_aymGk) + (harga_ayamGr * bnyk_ayamGr) + (harga_udngGr * bnyk_udngGr) + (harga_cumiGr * bnyk_cumiGr) + (harga_aymBk * bnyk_aymBk);
  if(jarak>=3){
      ongk = 25000;
    }
  else {
    ongk = 15000;
  }  
    if(total>=150000){
      dskon_mkn = total*0.35;
      t2=total-dskon_mkn;
      dskon_ongk = 8000;
      t2_ongk=ongk-dskon_ongk;
    }
    else if (total>=50000){
      dskon_mkn = total*0.15;
      t2=total-dskon_mkn;
      dskon_ongk = 5000;
      t2_ongk=ongk-dskon_ongk;
    }
    else if (total>=25000){
      dskon_ongk = 3000;
      t2_ongk=ongk-dskon_ongk;
    }
    else {
    	dskon_ongk = 0;
    }
  tulis_data.open("api_data.txt");
  tulis_data<<total<<endl;
  tulis_data<<dskon_mkn<<endl;
  tulis_data<<t2<<endl;
   tulis_data<<jarak<<endl;
  tulis_data<<ongk<<endl;
  tulis_data<<dskon_ongk<<endl;
  tulis_data<<t2_ongk<<endl;
  tulis_data<<t2+t2_ongk<<endl;
  tulis_data<<bnyk_aymGk<<endl;
  tulis_data<<bnyk_ayamGr<<endl;
  tulis_data<<bnyk_udngGr<<endl;
  tulis_data<<bnyk_cumiGr<<endl;
  tulis_data<<bnyk_aymBk;
  tulis_data.close();
}
private :
std::ifstream ambil_data;
std::ofstream tulis_data;
int bnyk_aymGk;
int bnyk_ayamGr;
int bnyk_udngGr;
int bnyk_cumiGr;
int bnyk_aymBk;
int jarak;
float ongk;
double dskon_mkn,dskon_ongk;
int t2;
int t2_ongk;
int harga_aymGk = 21000;
int harga_ayamGr = 17000;
int harga_udngGr = 19000;
int harga_cumiGr = 20000;
int harga_aymBk = 25000;
};
