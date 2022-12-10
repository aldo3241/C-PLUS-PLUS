#include <iostream>
using namespace std;
int main(){
	int b,k,m[3][4];
	
	cout<<"Masukan elemen array : \n";
	for (b=0; b<3; b++)
	{
		for (k=0; k<4; k++)
		{
			cout<<"Martiks "<<k+1<<": ";
			cin>>m[b][k];
		}
		cout<<"\n";
	}
	cout<<"Isi array: \n";
	for (b=0; b<3;b++)
	{
		for (k=0; k<4; k++)
		{
			cout<<m[b][k]<<endl;
		}
	cout<<"\n";
	}
	return 0;
}
