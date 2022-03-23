#include<iostream>
#include <string>
#include <iomanip>
#include<fstream>
using namespace std;
int main(){
	int a,b,c,d;
	float hasil1,hasil2,diskon,total;
		ofstream file;
	file.open("Struct.txt");
	
	cout<<"==========RESTORAN KOTA X============\n";
	cout<<"|1.ayam goreng : Rp.17000            |\n";
	cout<<"|2.Ayam Bakar  : Rp.21000            |\n";
	cout<<"=====================================\n";
	
	
	cout<<"jumlah pembelian\n";
	cout<<"ayam goreng : ";
	cin>>a;
	cout<<"ayam bakar : ";
	cin>>b;
	hasil1 = 17000*a;
	hasil2 = 21000*b;
	total = hasil1 + hasil2;

	if (total > 45000){
		diskon = 0.10;
	}else{
		diskon = 0;
	}
	cout<<"\n\n\n\n";
	cout<<"        STRUK MAKAN DI RESTO KOTA X"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"No   Barang     Jumlah     Harga     Sub Total"<<endl;
	cout<<"1  ayam goreng    "<<a<<"        17000     "<<hasil1<<endl;
	cout<<"2  ayam bakar     "<<b<<"        21000     "<<hasil2<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"Total awal : "<<total<<endl;
	d =	total*diskon;
	cout<<"diskon     : "<<d<<endl;
	cout<<"Total bayar: "<<total-d<<endl;
	cout<<"bayar      : ";cin>>c;
	cout<<"kembalian  : "<<c-(total-d)<<endl;
	cout<<"=========================================================="<<endl;
	cout<<"Cashir : Raisa"<<endl;
	cout<<"              THANK YOU FOR VISITING"<<endl;
	
	file<<"        STRUK MAKAN DI RESTO KOTA X"<<endl;
	file<<"---------------------------------------------------------"<<endl;
	file<<"No   Barang     Jumlah     Harga     Sub Total"<<endl;
	file<<"1  ayam goreng    "<<a<<"        17000     "<<hasil1<<endl;
	file<<"2  ayam bakar     "<<b<<"        21000     "<<hasil2<<endl;
	file<<"---------------------------------------------------------"<<endl;
	file<<"Total awal : "<<total<<endl;
	d =	total*diskon;
	file<<"diskon     : "<<d<<endl;
	file<<"Total bayar: "<<total-d<<endl;
	file<<"bayar      : "<<c<<endl;
	file<<"kembalian  : "<<c-(total-d)<<endl;
	file<<"=========================================================="<<endl;
	file<<"Cashir : Raisa"<<endl;
	file<<"              THANK YOU FOR VISITING"<<endl;

}
