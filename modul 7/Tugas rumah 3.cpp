#include <iostream>
#include <string.h>
using namespace std;
int space()
{
	for (int i=0;i<55;i++)
	{
		cout<<"-";
	}
	cout<<endl;
}

int main()
{
	space();
	cout<<"\t\tMENGHITUNG JUMLAH KATA"<<endl;
	space();
	void *red;
	char kt[3000];
	int jml, hasil;
	cout<<endl;
	cout<<" Masukkan sebuah kata atau kalimat : ";
	cin.getline(kt, sizeof(kt));
	cout<<endl;
	jml=strlen(kt)-1;
	hasil=1;
	red=&hasil;
	for (int a=1;a<=jml;a++)
	{
		if (kt[a-1]==' ' || kt[a-1]==',' || kt[a-1]=='.')
		{
			hasil++;
		}
	}
	space();
	cout<<endl;
	cout<<" Jumlah kata yang anda masukkan adalah : "<<*(int*)red<<endl<<endl;
	space();
}
