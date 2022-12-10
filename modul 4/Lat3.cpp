#include <iostream>
using namespace std;

int main(){
	int t;
	
	cout << " Masukan tinggi segitiga : ";
	cin >> t;
	
	cout <<endl;
	cout <<" Segitiga siku-siku dengan tinggi "<<t<<endl;
	
	for(int a=1; a<=t; a++)
	{
		for(int b=1; b<=a; b++)
		{
			cout << "*" ;
		}
		cout << endl;
	}
	return 0;
}
