#include <iostream>
using namespace std;
int main(){
	int pilihan,saldo=100000,setor,ambil,sisa;
	while (pilihan !=3)
	{
	cout<<"==========================================\n";
	cout<<" 		BANK INDONESIA JAYA              \n";
	cout<<"==========================================\n";
	cout<<"		 	Saldo= "<<saldo<<"\n";
	cout<<"Menu Transaksi\n";	cout<<"1. Setor Tabungan"<<"\n";
	cout<<"2. Ambil Tabungan"<<"\n";
	cout<<"3. Keluar"<<"\n";
	cout<<"Pilihan Menu Transaksi (1/2/3) : ";
	cin>>pilihan;
	
	if (pilihan == 1) 
	{
	cout<<"===========================================\n";
	cout<<" 		BANK INDONESIA JAYA              \n";     
	cout<<"===========================================\n";
	cout<<"Setor Tabungan"<<"\n";
	cout<<"Masukkan Besar Setoran : ";
	cin>>setor;
	saldo=saldo+setor;
	cout<<"Jumlah Saldo Anda : "<<saldo<<"\n";
	return 0;
	}
else if (pilihan == 2) 
{
	cout<<"===========================================\n";
	cout<<" 		BANK INDONESIA JAYA              \n";
	cout<<"===========================================\n";

if (saldo <= 50000) 
{
	cout<<"Anda tidak bisa melakukan pengambilan uang"<<"\n";
	cout<<"Saldo Minimal 50000"<<"\n"; 
}

else 
{
	cout<<"Ambil Tabungan\n";
	cout<<"Masukkan Jumlah Penarikan = ";
	cin>>ambil;
	sisa=saldo-ambil;

if (sisa<50000)

{ 
	cout<<"Anda tidak bisa melakukan pengambilan uang"<<"\n";
	cout<<"Saldo Minimal 50000"<<"\n"; 
}

else
{ 
	saldo=sisa;
	cout<<"Saldo Anda Sekarang "<<saldo;
}
	}
	
return 0; 
}

else if (pilihan == 3) {
}
return 0;
	}
}
