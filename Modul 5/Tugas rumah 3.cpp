#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
int n, bil1=1, bil2=1, jawab, jum=0;
int i, j=2, fibonacci[100];
	cout<<"Bilangan Fibonacci pada Deret ke-: ";
	cin>>n;
	fibonacci[0]=bil1;
	fibonacci[1]=bil2;
for(i=1; i<=n-2; i++)
{
	jawab=bil1+bil2;
	bil1=bil2;
	bil2=jawab;
	fibonacci[j++]=jawab;
}
	cout<<"adalah : "<<fibonacci[n-1]<<"\n";
for(i=1; i<=fibonacci[n-1]; i++)
{
if (fibonacci[n-1]%i==0)
	{ jum++; }
}
if (jum==2)
	{ cout<<fibonacci[n-1]<<" adalah bilangan prima"<<endl; }
else
	cout<<fibonacci[n-1]<<" adalah bukan bilangan prima"<<endl;
	
	getch();
}

