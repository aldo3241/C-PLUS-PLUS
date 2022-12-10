#include <iostream>
using namespace std;

void space ()
{
cout<<"-------------------------------------------------"<<endl;
}

int main()
{
	float phi = 3.14,t,r,lp,sp,vp;
	
	space();
	cout<<"                 MODUL FUNCTION "<<endl;
	space();
	cout<<"                 PROGRAM TABUNG "<<endl;
	space();
	cout<<"Masukan nilai Jari-Jari Tabung : ";
	cin>>r;
	cout<<"Masukan nilai Tinggi tabung : ";
	cin>>t;
	
	lp=2*phi*r*(r+t);
	sp=2*phi*r*t;
	vp=phi*r*r*t;
	
	cout<<endl;
	space();
	cout<<"Nilai Luas tabung    : "<<lp<<endl;
	cout<<"Nilai Selimut tabung : "<<sp<<endl;
	cout<<"Nilai Volume tabung  : "<<vp<<endl;
	space();

return 0;

}
