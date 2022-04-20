#include <fstream>
#include <iostream>
#include "proses.h"
using namespace std;

class input {
public:
	
	void inputIdentitas(){
		string nama,nim,prodi;
		cout<<"nama 	: "; cin>>nama;
		cout<<"nim		: "; cin>>nim;
		cout<<"prodi 	: "; cin>>prodi;
		proses.setIndentitas(nama,nim,prodi);
	}
	
  void inputMatkul(int matkul) {
  	
  	
	for(int a=0; a<matkul; a++){
			cout<<"matkul	: "; cin>>mk;
			cout<<"sks		: "; cin>>sks;
			listMatkul[a] = mk;
			totsks+=sks;
    }
	proses.hitung(totsks);
	proses.report();
	showMatkul(0, matkul-1);
  }
  
  void showMatkul(int a, int b){
  	
  	cout<<"Matkul : "<<listMatkul[a]<<endl;
  	
  	if (a == b){
  		return;
	  }
  	
  	showMatkul(++a, b);
  }
  
  
private:
	string listMatkul[100];
  ofstream tulis_data;
  proses proses;
  string mk;
  int sks;
  int totsks=0;
};

