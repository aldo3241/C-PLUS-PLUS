#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	void *tunjuk;
	
	double n_double = 25.5;
	char n_char[100] = "D";
	
	tunjuk = &n_double;
	cout<<"nilai yang si tunjukan adalah : "<<*(double *)tunjuk<<endl;
	
	tunjuk = n_char;
	cout<<"nilai yang si tunjukan adalah : "<<*(char *)tunjuk<<endl;
	
	return 0;
}
