#include <iostream>
using namespace std;

int ph()
{
	cout<<" | ";
}
int line()
{
	for(int i=0;i<115;i++)
	{
		cout<<"-";
	}
	cout<<endl;
}
int main()
{
	line();
	char *bln[]= {"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};
	cout<<"\t\t\t\t\t\t| NAMA NAMA BULAN |"<<endl;
	line();
	ph();
	int up=sizeof(bln)/sizeof(bln[0]);
	for(int i=0;i<up;i++){
		cout<<*(bln+i);
		ph();
	}
	cout<<endl;
	line();
}

