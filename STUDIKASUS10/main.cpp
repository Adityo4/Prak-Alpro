#include<iostream>
#include<stdlib.h>
#include"input.hpp"
using namespace std;
class lomba{
	public :
struct node
{
    int nim;
	string nama;
	struct node *next;
}*front=NULL,*rear,*temp;
void ins()
{
	temp=new node;
	string n;
	cout<<" Input NIM\t: ";
    cin>>nnim;
    cin.ignore(1,'\n');
    cout<<" Input nama\t\t: ";
    getline(cin,n);
	temp->nim=nnim;
	temp->nama=n;
	temp->next=NULL;

	if(front==NULL)
		front=rear=temp;
	else
	{
		rear->next=temp;
		rear=temp;
	}
}

void del()
{
	if(front==NULL)
		{cout<<" Belum ada Peserta!\n";
		getch();}
	else
	{
		temp=front;
		front=front->next;
		cout<<" NIM "<<temp->nim<<" dihapus beserta datanya\n";
		delete(temp);
		getch();
	}
}
void dis()
{
	if(front==NULL)
		{cout<<" Belum ada Peserta!\n";
		getch();}
	else
	{
		temp=front;
		while(temp!=NULL)
		{
			cout<<" NIM: "<<temp->nim<<endl;
			cout<<" Nama\t: "<<temp->nama<<endl;
			cout<<" ------------------------------"<<endl;
			temp=temp->next;
		}
		getch();
	}
}
void cari()
{
    node *temp;
    temp=front;
    int caridata;
    int ketemu=0;
    if(front != NULL)
    {
        cout<<"\n Input NIM Peserta Yang Ingin Dicari\t: ";
        cin>>caridata;
        while(temp!=NULL)
        {
            temp->nim;
            if(caridata==temp->nim)
            {
                cout<<"\n\n>>>  Data Yang Anda Cari Ditemukan  <<<"<<endl;
                cout<<" Nama\t: "<<temp->nama<<endl;
                cout<<" ------------------------------"<<endl;
                cout<<"\n\n";
              ketemu=1;
            }
            temp=temp->next;
        }
        if(ketemu==0)
        {
            cout<<" Data tidak ditemukan";
        }
    }
    else cout<<" Belum ada nasabah!";
    getch();
}
int menu()
{
	int ch,nr,isi;
	while(1)
	{
	    system("clear");
	    cout<<"\n\n=================================================";
		cout<<"\n                       DATA PESERTA                    ";
        cout<<"\n===================================================";
		cout<<"\n 1.Input Data Peserta ";
		cout<<"\n 2.Hapus Data Peserta";
		cout<<"\n 3.Tampilkan Daftar Peserta";
		cout<<"\n 4.Cari Data Peserta";
		cout<<"\n 5.Keluar";
		cout<<"\n\n Masukkan Pilihan (1-5): ";
		cin>>ch;
		cout<<"\n=================================================";
		cout<<"\n";
		switch(ch)
		{
			case 1:
			    ins();
          break;
			case 2:
			    del();
			    break;
			case 3:
			    dis();
          break;
      case 4:
          cari();
          break;
			case 5:
			    exit(0);
                break;
			default:
			    cout<<"Input salah, silahkan input ulang!(press any key)";
			    getch();
		}
	}
	return 0;
}
	private :
		int nnim,ch;
};

int main(){
	lomba a;
	a.menu();
}
