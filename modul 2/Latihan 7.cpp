# include <stdio.h>
# include <conio.h>
# include <iostream>

using namespace std;

int main()
{
	int a,b,c,x,y;
	cout<<" Masukan Nilai X = ";
	cin>>x;
	cout<<" Masukan Nilai y = ";
	cin>>y;
	
	a=x&y;
	b=x||y;
	c=x^y;
	
	cout<<"\n";
	cout<<" Hasil dari "<<x<<"&"<<y<<" = "<<a<<endl;
	cout<<" Hasil dari "<<x<<"|"<<y<<" = "<<b<<endl;
	cout<<" Hasil dari "<<x<<"^"<<y<<" = "<<c<<endl;
	
	getch();
}
