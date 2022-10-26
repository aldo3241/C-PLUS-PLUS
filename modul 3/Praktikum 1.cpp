#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float a,b,c,d,e,f,g,p;
	cout<<"======= 7 ELEVEN MART ======="<<endl;
	cout<<"Total Pembelian : ";
	cin>>a;
	cout<<"Nama Pembeli : ";
	cin>>p;
	cout<<"Kasir : Ahmad Khoirul Huda"<<endl;
	cout<<"==========================="<<endl;
	
	if (a>100000)
	{
	d=a*0.3;
		g=a-d;
		cout<<"Potongan Harga 30% = "<<d<<endl;
		cout<<"Total = "<<g<<endl;
	}
	else if(a>=75000)
	{
		c=a*0.2;
		f=a-c;
		cout<<"Potongan Harga 20% = "<<c<<endl;
		cout<<"Total = "<<f<<endl;
	}
	else
	{
		b=a*0.1;
		e=a-b;
		cout<<"Potongan Harga 10% = "<<b<<endl;
		cout<<"Total = "<<e<<endl;
	}
	cout<<"============================="<<endl;
	cout<<"      TERIMAKASIH ^_^"<<endl;
	cout<<"============================="<<endl;
	getch ();
}