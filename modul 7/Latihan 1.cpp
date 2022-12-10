#include <iostream>
using namespace std;

int main()
{
	int *pbil;
	int bilx=77;
	pbil=&bilx;
	
	cout<< "isi bilx                   = "<<bilx<<endl;
	cout<< "Nilai yang ditunjuk pbil   = "<<*pbil<<endl;
	
	*pbil = *pbil + 3;
	
	cout <<"Isi blix sekarang          = "<<bilx<<endl;
	cout <<"Nilai yang ditunjuk pbil   = "<<*pbil<<endl;
}
