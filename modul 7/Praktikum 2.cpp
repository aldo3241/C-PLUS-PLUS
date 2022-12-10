#include <iostream>
using namespace std;

int main()
{
	string *sel;
	string hari[]=
	{
		" Senin"," Selasa"," Rabu"," Kamis"," Jumat"," Sabtu"," Minggu"
	};
	int x,day;
	
	cout<<" Hari <1-7> : ";
	cin>>day;
	if(day<8)
	{
		x =day-1;
		hari[x];
		sel=hari;
		cout<<"Hari Ke-"<<day<<" Adalah hari"<<*(sel+x)<<endl;
	}
	else
	{
		x=5;
		hari[x];
		cout<<"Kode hari salah";
	}
}
