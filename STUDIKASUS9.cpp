#include <iostream>
using namespace std;
class studi{
	public:

		void input(){
			for(int i=0;i<24;i++){
				cout<<"Masukan Kode buku ke-"<<i+1<<" : ";
				cin>>data[i];
			}
			cout<<endl;
		}
		
		void proses(){
			for(x=0; x<23; x++){ 
				for(y=x+1; y<24; y++){
					if(data[x]>data[y]){
						temp=data[x];
						data[x]=data[y];
						data[y]=temp;
					}
				}
			}
			
			int i = 0;
			while(i<20){
				for(x=0;x<4;x++){
					for(y=0;y<6;y++){
						bil[x][y]= data[i];
						i++;
					}
				}
			}
		}
		
		void output(){
			cout<<"Nomor Buku Setelah Diurutkan : \n";
			for(int i=0; i<24; i++){
				cout<<data[i]<<" ";
			}
      cout<<"\n==========================================\n";
			cout<<"\nBuku yang didalam rak "<<endl;
			for(int i=0;i<4;i++){
        cout<<"Rak buku - "<<i+1<<endl;
				for(int j=0;j<6;j++){
					cout<<bil[i][j] <<"  ";
				}
				cout<<endl;
			}
		}
		
		private : 
		int data[24];
		int bil[4][6];
		int x,y,temp;
};

int main(){
	studi a;
  cout<<"MENGURUTKAN BUKU DIDALAM SEBUAH RAK \n";
  cout<<"====================================\n";
	a.input();
	a.proses();
	a.output();
  return 0;
}