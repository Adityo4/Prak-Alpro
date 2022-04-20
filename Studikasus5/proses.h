#include <iostream>
#include <fstream>
using namespace std;

class proses{
public : 
void hitung(int totsks){
		this->totsks = totsks;
    	this->total = this->harga*totsks;
		this->diskon1=total*0.1;
		total1=total-diskon1;
		diskon2=total1*0.05;
		total2=total1-diskon2;
  }

void setIndentitas(string nama, string nim, string prodi){
	this->nama = nama; 
	this->nim = nim; 
	this->prodi = prodi;
}

void report(){
cout<<"============================================"<<endl;
		cout<<"Nama			: "<<nama<<endl;
		cout<<"NIM			: "<<nim<<endl;
		cout<<"SKS			: "<<totsks<<endl;
		cout<<"Tarif		: "<<total2<<endl;
}




private :
	int total;
	int harga=120000;
	int totsks=0;
	string nama,prodi,nim;
	int matkul,sks;
	float diskon1,diskon2;
	int a;
	string mk;
	int total1,total2;
};

