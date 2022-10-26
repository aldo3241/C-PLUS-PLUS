#include <iostream>

using namespace std;

int main ()
{
	float a,b,c,d,e,f,g;
	cout << "Toko Dezz what"<<endl;
	cout<<"Total Penjualan = ";
	cin >> a ;
	cout << "Kasir = killer queen"<<endl;
	cout << "Sales = ";
	cin >> g;
	{
		b=a+(a * 0.15) + 15000;
		c=a+(a * 0.20) + 30000;
		d=a+(a * 0.30) + 50000;
	}
	
	
	if (a > 100000)
	
		cout << "hasil =" <<d<<endl;
	
	else if ( a > 60000 )
	
		cout << "hasil = "<<c<<endl;
	
	else
		cout << " hasil = "<<b<<endl;
	
	
}
