#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int lembar[100], harga[100];
for(int a=0;a<100;a++) {
	lembar[a]=a+1;
	
	harga[a]=lembar[a]*80; }
	cout<< "| TABEL HARGA FOTOCOPY |\n";
	cout<< "| Toko Fahrel dan Irul |\n";
	cout<< "---------------------------------\n";
	cout<< "| Jumlah (Lbr) | Harga (Rp) |\n";
	cout<< "---------------------------------\n";
for(int b=0;b<100;b++) {
	cout<< "|"<<lembar[b];
	cout<< "|"<<harga[b]<<"|\n"; }
	cout<<"----------------------------------\n";

getch();
}

