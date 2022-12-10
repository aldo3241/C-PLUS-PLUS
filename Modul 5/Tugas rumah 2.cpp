#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
int p[4]={1,1,0,0}; int q[4]={1,0,1,0};
int o[4], a[4], n[4], x[4];
for(int i=0; i<4; i++)
{
	o[i] = p[i] || q[i];
	a[i]= p[i] && q[i];
	n[i]=!p[i];
	x[i]= p[i]^q[i];
}
	cout<<"--------------------------------------------------\n";
	cout<<"| P | Q | P OR Q | P AND Q | NOT P | P XOR Q |\n";
	cout<<"--------------------------------------------------\n";
for(int i=0; i<4; i++)
{
	cout<<"| "<<p[i]<<" ";
	cout<<"| "<<q[i]<<" ";
	cout<<"| "<<o[i]<<" ";
	cout<<"| "<<a[i]<<" ";
	cout<<"| "<<n[i]<<" ";
	cout<<"| "<<x[i]<<" |"<<endl;
}
	cout<<"--------------------------------------------------\n";


getch();
}

