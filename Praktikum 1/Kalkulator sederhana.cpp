#include <iostream>
using namespace std;
main(){
	float bil1,bil2,hasil;
	int pil;
	cout<<"===========KALKULATOR=============="<<endl;
	cout<<"1. Tambah		|"<<endl;
	cout<<"2. Kurang		|"<<endl;
	cout<<"3. Kali			|"<<endl;
	cout<<"4. Pembagian		|"<<endl;
	cout<<"Pilih : ";
	cin>>pil;
	cout<<"===================================="<<endl;
	switch(pil){
		case 1 :
				 cout<<"bil1  =  ";
				 cin>>bil1;
				 cout<<"bil2  =  ";
				 cin>>bil2;
				 hasil=bil1+bil2;
				 cout<<"       ============= +"<<endl;
				 cout<<"hasil =  "<<hasil;
				 break;
		case 2 : 
				 cout<<"bil1  =  ";
				 cin>>bil1;
				 cout<<"bil2  =  ";
				 cin>>bil2;
				 hasil=bil1-bil2;
				 cout<<"       ============= -"<<endl;
				 cout<<"hasil =  "<<hasil;
				 break;
		case 3 : 
				 cout<<"bil1  =  ";
				 cin>>bil1;
				 cout<<"bil2  =  ";
				 cin>>bil2;
				 hasil=bil1*bil2;
				 cout<<"       ============= X"<<endl;
				 cout<<"hasil =  "<<hasil;
				 break;
		case 4 : 
				 cout<<"bil1  =  ";
				 cin>>bil1;
				 cout<<"bil2  =  ";
				 cin>>bil2;
				 hasil=bil1/bil2;
				 cout<<"       ============= :"<<endl;
				 cout<<"hasil =  "<<hasil;
				 break;
		default : cout<<"tidak tersedia"<<endl; 
	}
}

