#include <iostream>

using namespace std;
int main()
{
	int x,y;
	cout<<"Masukan Nilai X=";
	cin>>x;
	cout<<"Masukan Nilai Y=";
	cin>>y;
	
	x=(x<<3);
	y=(y>>2);
	
	cout<<"Hasil dari Geser 3 Bit ke Kiri= "<<x<<endl;
	cout<<"Hasil dari Geser 2 Bit ke Kanan= "<<y<<endl;
}
