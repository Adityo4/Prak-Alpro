#include <iostream>
using namespace std;
class nilai{
	public: 
  void input();
  void proses();
  void output();
  private:
  string dosen,mhs;
	int n = 100;
	int max=0 ,min= 0, avg=0, jum=0;
  
};

void nilai::input(){
	cout<<"Nama dosen : ";
	cin>>dosen;
	cout<<"Nama Mahasiswa	  : ";
	cin>>mhs;
	cout<<"masukan berapa matkul yang akan di inputkan nilainya : ";
	cin>>n;
  }

void nilai::proses(){
  string matkul[n];
	int nilai[n];
	for(int i=0;i<n;i++){
		cout<<"masukan matkul ke-"<<i+1<<":";
		cin>>matkul[i];
	}
		for(int j=0;j<n;j++){
		cout<<"masukan nilai "<<j+1<<":";
		cin>>nilai[j];
		jum+=nilai[j];			
		}
		min=max=nilai[0];
		for(int j=0;j<n;j++){
			if(max<nilai[j]){
				max=nilai[j];
			}
			if(min>nilai[j]){
				min=nilai[j];
			}
		}
		avg=jum/n;
  cout<<"======================"<<endl;
    cout<<"Nama dosen :"<<dosen<<endl;
    cout<<"Nama Mahasiswa  :"<<mhs<<endl;
    cout<<"nilai  : "<<endl;
    cout<<"=================="<<endl;
    for(int j=0;j<n;j++){
      cout<<matkul[j]<<endl;
      cout<<nilai[j]<<endl;
    }
  cout<<"===================="<<endl;
		cout<<"nilai MAX  :"<<max<<endl;
		cout<<"nilai MIN  :"<<min<<endl;
		cout<<"nilai AVG  :"<<avg<<endl;
}

int main(){
  nilai nilai;
  nilai.input();
  nilai.proses();  
}
