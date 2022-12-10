#include <iostream>
#include <math.h>
using namespace std;

void garis()
{
	cout<<"----------------------------------------------------"<<endl;
}

void code()
{
	 int a=0;
	 float rata,deviasi,data[100],sum=0,b,totalb;
	 char lagi;
	 do 
	 {
	 	 cout<<"Masukkan Data : ";
	 	 cin>>data[a];
	 	 sum=sum+data[a];
	 	 a++;
	 	 cout<<"Masukkan Data Lagi?(y/n) : ";
	 	 cin>>lagi;
	 }
	 while(lagi=='y');
	 cout<<endl;
	 rata=sum/a;
	 cout<<" Nilai Rata-rata : "<<rata<<endl<<endl;
	 totalb=0;
	 for(int i=0;i<a;i++)
	{
		b=data[i]-rata;totalb=totalb+(b*b);
	}
	deviasi=sqrt(totalb/(a-1));
	cout<<" Simpangan Baku : "<<deviasi<<endl;
 }
 int main()
{
	 garis();
	cout<<"\t\t MODUL FUNCTION"<<endl;		garis();
	cout<<"\t    PROGRAM STANDAR DEVIASI"<<endl;
	garis();
	 code();
}
