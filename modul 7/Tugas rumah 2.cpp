#include <iostream>
using namespace std;

void result(int *w1, int *x1, int *y1, int *z1)
{
int a,b,c,d;

a=*w1*3;
b=*x1*3;
c=*y1*3;
d=*z1*3;
	
	cout<<" Nilai Keluaran : "<<endl;
	cout<<" Nilai w = "<<a<<endl;
	cout<<" Nilai x = "<<b<<endl;
	cout<<" Nilai y = "<<c<<endl;
	cout<<" Nilai z = "<<d<<endl;
}
int main()
{
int w,x,y,z;

	cout<<" Masukkan Nilai w : ";
cin>>w;
	cout<<" Masukkan Nilai x : ";
cin>>x;
	cout<<" Masukkan Nilai y : ";
cin>>y;
	cout<<" Masukkan Nilai z : ";
cin>>z;

result(&w,&x,&y,&z);
}
