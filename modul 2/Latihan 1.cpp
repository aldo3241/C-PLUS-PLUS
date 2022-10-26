#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	float a , b , c = 0 , d = 0, e = 0 , f = 0 ;
		
		cout<<" masukan nilai a";
		cin>>a;
		cout<<"masukan nilai b : ";
		cin>>b;
		
		c = a*b;
		d = a/b;
		e = a+b;
		f = a-b;
		
		cout<<"Hasil dari c = a * b = "<<c<<endl;
		cout<<"Hasil dari c = a / b = "<<d<<endl;
		cout<<"Hasil dari c = a + b = "<<e<<endl;
		cout<<"Hasil dari c = a - b = "<<f<<endl;
		getch() ;
}
