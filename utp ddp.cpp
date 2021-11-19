#include <iostream>
#include <windows.h>
using namespace std;
//Tugas UTP DDP TIKET WAHANA

	void x(){
	system ("color 3");
	cout<<"==================DAFTAR HARGA WAHANA DAUN=================="<<endl;
	cout<<"Bombom car                              : Rp100.000"<<endl;
	cout<<"Bianglala                               : Rp20.000"<<endl;
	cout<<"Halilintar                              : Rp150.000"<<endl;
	cout<<"Kora-kora                               : Rp50.000"<<endl;
	cout<<"Gajah bledug                            : Rp10.000"<<endl;
	cout<<"Paket Keluarga(untuk 5 orang atau lebih): Rp5.000.000"<<endl;
	cout<<"============================================================"<<endl;
	cout<<"*bebas masuk wahana apapun untuk paket keluarga"<<endl;
	cout<<"============================================================"<<endl;
}

void y(){
	int x;
	for (x=20; x>=0; x--){
		cout<<"          Mohon Menunggu           "<< endl;
		cout<<"    Tiket anda sedang di proses    "<< endl;
		system("cls");
	}
}



int main(){
	x();
	int wahana[5]={100000,20000,150000,50000,10000};
	int a,b,c,d,e;
	int pk=50000000;
	int X,Y,Z;
	int i=5;
	cout<<"Jumlah orang yang ingin masuk : ";
	cin>>X;
	cout<<"============================================================"<<endl;
	while (X>=i){
	cout<<"Apakah anda ingin membeli paket keluarga?"<<endl;
	cout<<"1. Ya"<<endl;
	cout<<"2. Tidak"<<endl;
	cin>>Y;
		if(Y==1){
			y();
			cout<<"======================total pembayaran======================"<<endl;
			cout<<"Pembelian Paket keluarga ";
			cout<<"Rp"<<pk;
			break;
			}
		else{
	cout<<"================PEMBELIAN TIKET WAHANA DAUN================="<<endl;
	cout<<"Masukkan jumlah tiket bombom car yang ingin anda beli   : ";
	cin>>a;
	cout<<"Masukkan jumlah tiket bianglala yang ingin anda beli    : ";
	cin>>b;
	cout<<"Masukkan jumlah tiket halilintar yang ingin anda beli   : ";
	cin>>c;
	cout<<"Masukkan jumlah tiket kora-kora yang ingin anda beli    : ";
	cin>>d;
	cout<<"Masukkan jumlah tiket gajah bledug yang ingin anda beli : ";
	cin>>e;
	y();
	cout<<"======================total pembayaran======================"<<endl;
	cout<<"Jumlah tiket bombom car   :";
	cout<<a<<endl;
	cout<<"Jumlah tiket bianglala    :";
	cout<<b<<endl;
	cout<<"Jumlah tiket halilintar   :";
	cout<<c<<endl;
	cout<<"Jumlah tiket kora-kora    :";
	cout<<d<<endl;
	cout<<"Jumlah tiket gajah bledug :";
	cout<<e<<endl;
	cout<<"============================================================"<<endl;
	cout<<"Total Harga Rp"<<(wahana[0]*a)+(wahana[1]*b)+(wahana[2]*c)+(wahana[3]*d)+(wahana[4]*e);
	break;
		
			
		}
			
		}
	while (X<5){
	cout<<"================PEMBELIAN TIKET WAHANA DAUN================="<<endl;
	cout<<"Masukkan jumlah tiket bombom car yang ingin anda beli   : ";
	cin>>a;
	cout<<"Masukkan jumlah tiket bianglala yang ingin anda beli    : ";
	cin>>b;
	cout<<"Masukkan jumlah tiket halilintar yang ingin anda beli   : ";
	cin>>c;
	cout<<"Masukkan jumlah tiket kora-kora yang ingin anda beli    : ";
	cin>>d;
	cout<<"Masukkan jumlah tiket gajah bledug yang ingin anda beli : ";
	cin>>e;
	y();
	cout<<"======================total pembayaran======================"<<endl;
	cout<<"Jumlah tiket bombom car   :";
	cout<<a<<endl;
	cout<<"Jumlah tiket bianglala    :";
	cout<<b<<endl;
	cout<<"Jumlah tiket halilintar   :";
	cout<<c<<endl;
	cout<<"Jumlah tiket kora-kora    :";
	cout<<d<<endl;
	cout<<"Jumlah tiket gajah bledug :";
	cout<<e<<endl;
	cout<<"============================================================"<<endl;
	cout<<"Total Harga : Rp"<<(wahana[0]*a)+(wahana[1]*b)+(wahana[2]*c)+(wahana[3]*d)+(wahana[4]*e);
	break;
}
	}
	

