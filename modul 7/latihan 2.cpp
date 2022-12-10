#include <iostream>
using namespace std;
int main()
{
	long *p, x;
	
	p = &x;
	x = 40;
	
	cout<<"nilai x  = "<<x<<endl;
	cout<<"nilai p  = "<<p<<endl;
	cout<<"nilai *p = "<<*p<<endl;
	cout<<"nilai &x = "<<&x<<endl<<endl;
	
	*p = 25;
	
	cout<<"nilai x  = "<<x<<endl;
	cout<<"nilai p  = "<<p<<endl;
	cout<<"nilai *p = "<<*p<<endl;
	cout<<"nilai &x = "<<&x<<endl<<endl;
	
	return 0;
}
