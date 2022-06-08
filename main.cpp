#include<iostream>
using namespace std;
 class studi {
 	private : 
 	int a[5][2];
 	int total [5];
 	int hasil;
 	
 	public:
 		void input();
 		void proses();
 		void output();
 		
 };
 
 void studi :: input(){
 	for(int i =0 ; i <5 ; i++){
 		cout<<"Masukan stok : ";
 		cin>>a[i][0];
	 }
	 for(int i = 0 ; i<5;i++){
	 	cout<<"Masukan harga : ";
	 	cin>> a[i][1];
	 }
 }
  void studi::proses(){
  	for(int i = 0 ; i< 5; i++){
  		total[i]=a[i][0] * a[i][1];
	  }
	  for (int i =0 ; i <5 ;i++){
	  hasil = hasil + total[i];
	  }
  }
void studi::output(){
  cout<<"================================="<<endl;
  cout<<"NAMA BARANG \t STOK \t HARGA \t TOTAL "<<endl;
  cout<<"================================="<<endl;
  cout<<"Logitech\t";
  for(int i =0 ; i <2; i++){
  	cout<< a[0][i]<<"\t";
  }
  cout<<total[0];
   cout<<"\nMicrosoft\t";
  for(int i =0 ; i <2; i++){
  	cout<< a[1][i]<<"\t";
  }
  cout<<total[1];
   cout<<"\nAppel  \t\t";
  for(int i =0 ; i <2; i++){
  	cout<< a[2][i]<<"\t";
  }
    cout<<total[2];
   cout<<"\nDELL   \t\t";
  for(int i =0 ; i <2; i++){
  	cout<< a[3][i]<<"\t";
  }
   cout<<total[5];
   cout<<"\n================================"<<endl;
   cout<<"\ntotal penjualan "<<"\t"<<hasil;
   cout<<"\n================================"<<endl;
}
int main (){
	studi run;
	cout<<"MASUKAN INPUTAN STOK DAN HARGA"<<endl;
	run.input();
	cout<<endl;
	run.proses();
	cout<<endl;
	run.output();
}