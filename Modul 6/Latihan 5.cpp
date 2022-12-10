/*aplikasi rekursif pada fibonacci*/
#include <iostream>
using namespace std;

long fibo(long a)
{
	if (a<=1 && a<=2)
		return 1;
	else
		return fibo(a-1) + fibo(a-2);
} 

int main()
{
	int x;
	cout<<" Mencari Nilai Fibonacci \n";
	cout<<" Masukan nilai n=";
	cin>>x;
	cout<<"Fibonacci "<<x<<"="<<fibo(x)<<endl;
}
