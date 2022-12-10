#include <iostream>
using namespace std;
int main()
{
	char  k[]=" Anya mellfisa sukki des ";
	int h,i;
	for (i=0; k[i] !='\0' ; i++)
	{
		h++;
	}
	cout<<"Kalimat : "<<k<<" Mempunyai "<<h<<" huruf ";
	cout<<"Dan disimpan dalam bytes"<<h+1<<endl;
}
