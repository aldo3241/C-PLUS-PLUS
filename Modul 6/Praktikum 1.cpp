#include <iostream>
using namespace std;

void line ()
{
	cout<<"--------------------------------------------------"<<endl;
}

int factorial(int n)
{
	if(n<=1)
	{
		return true;
	}
	else
	{
		return n*factorial(n-1);
	}
}

int main()
{
	int n, r, c;
	line();
	cout<<"		MODUL FUNCTION"<<endl;
	line();
	cout<<"		PROGRAM KOMBINASI"<<endl;
	line();
	cout<<"Masukan nilai n : ";
	cin>>n;
	cout<<"Masukan nilai r : ";
	cin>>r;
	c = factorial(n)/(factorial(r)*factorial(n-r));
	cout<<"Hasil Combinasi "<<n<<"C"<<r<<" adalah "<<c;
}