/*aplikasi rekursif pada faktorial*/
#include <iostream>
using namespace std;

int faktorial(int a)
{
	if (a<=1)
		return 1;
	else
		return a*faktorial(a-1);	
}

int main()
{
	int x;
	cout<<"Mencari nilai faktorial\n ";
	cout<<"masukan nilai n :";
	cin>>x;
	cout<<"Faktorial "<<x<<"!="<<faktorial(x)<<endl;
}
