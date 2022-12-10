#include <iostream>

using namespace std;
int main()
{
	int i,  n[10];
	
	cout<<" Masukan nilai 10 mahasiswa : "<<endl;
	
	
	for (i=0; i<10; i++)
	{
		cout<<" mahasiswa "<<i+1<<": ";
		cin>>n[i];	
	}
	cout<<" Nilai mahasiswa yang telah di masukan "<<endl;
	for (i=0; i<10; i++)
	{
		cout<<"Mahasiswa "<<i+1<<":  "<<n[i];
		cout<<endl;
	}
	return 0;
}
