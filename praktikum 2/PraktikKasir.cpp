#include <iostream>
#include <string> //header untuk string agak bisa digunakan
#include <iomanip> //header untuk mengatur tampilan layar
#include <fstream> // header untuk Mendeklarasikan fstream agar dapat akses file
using namespace std;
int main() {
	int jum_beli, bayar,diskon,jumlah[50], harga[50], sub_tot[50]; //tipe data int dan variable nya
	string nama_barang[50]; //tipe data string dan variable
	float tot; //tipe data float
	int n; // tipe data int
	ofstream file; //mendeklarasikan varible file kedalam ofstream
	file.open("struk.txt"); //file.open untuk membuka struk.txt
	
	cout<<"       PROGRAM KASIR"<<endl;
	cout<<"============================"<<endl;
	cout<<"|1.Masukan barang belanjaan|"<<endl;
	cout<<"|2.keluar                  |"<<endl;
	cout<<"============================"<<endl;
	cout<<" Masukan pilihan anda : ";
	cin>>n;
	cout<<"============================"<<endl;
	cout<<endl;
	
	if(n==1){ //jika memilih 1
	

	cout<<"Masukan Jumlah Beli : ";
	cin>>jum_beli; 
	cout<<"============================"<<endl;
	
	for (int i=0; i<jum_beli;i++){
		cout<<endl;
		cout<<"Masukan Barang Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Barang : ";
		cin>>nama_barang[i];
		
		cout<<"Jumlah      : ";
		cin>>jumlah[i]; 
		
		cout<<"Harga       : ";
		cin>>harga[i];
		
		sub_tot[i]=jumlah[i]*harga[i];
		tot+=sub_tot[i]; 
	}
	
	cout<<endl;
	cout<<"        STRUK BELANJA MINI MARKET AHONG"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	for (int i=0;i<jum_beli;i++){ 
		cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl; 
	}
	cout<<"---------------------------------------------------------"<<endl;
	if (tot>=100000){   // percabangan untuk mencari diskon / algoritma untuk mencari diskon
		diskon=0.06*tot;
	} else if (tot>=50000){
		diskon=0.04;
	}else if (tot>=25000){
		diskon=0.02;
	}else {
		diskon=0;
	}
	
	//Menampilkan Keterangan
	cout<<"Jumlah Bayar : Rp."<<tot<<endl;
	cout<<"Dikon        : Rp."<<diskon<<endl; 
	cout<<"Total Bayar  : Rp."<<tot-diskon<<endl;
	cout<<"Bayar        : Rp.";
	cin>>bayar; 
	cout<<"Kembali      : Rp."<<(bayar-(tot-diskon))<<endl;
	cout<<"=========================================================="<<endl;
	cout<<"Cashir : Raisa"<<endl;
	cout<<"              THANK YOU FOR VISITING"<<endl;
	
	
	file<<"         STRUK BELANJA MINI MARKET AHONG"<<endl;
	file<<"---------------------------------------------------------"<<endl;
	file<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	for (int i=0;i<jum_beli;i++){
		file<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl; 
	}
	file<<"---------------------------------------------------------"<<endl;
		//Menampilkan Keterangan
	file<<"Jumlah Bayar : Rp."<<tot<<endl;
	file<<"Dikon        : Rp."<<diskon<<endl; 
	file<<"Total Bayar  : Rp."<<tot-diskon<<endl;
	file<<"Bayar        : Rp."<<bayar<<endl; 
	file<<"Kembali      : Rp."<<(bayar-(tot-diskon))<<endl; 
	file<<"---------------------------------------------------------"<<endl;
	file<<"Cashir : Raisa"<<endl;
	file<<"              THANK YOU FOR VISITING"<<endl;
}
   else if(n==2){ //jika pilih 2 dimenu akan terlempar ke 
	cout<<"yang diinputkan salah"<<endl;
	file<<"yang diinputkan salah";
	}	
	system("START /MIN NOTEPAD struk.txt"); // system agar ketika file dibuat maka struct txt akan dibuka
}
