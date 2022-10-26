#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int a,b,c,d,e,j,k,l,m,n;

cout<< "      Masukan nilai a : ";
cin >> a;
cout<< "      Masukin nilai b : ";
cin >> b;
cout<< "      Masukin nilai c : ";
cin >> c;

d = (a*b) - c / (b+a);
e = (d<<2);

cout<<"\n";
cout << " Nilai dari D = "<<d<<endl;
cout << " Hasil dari geser 2 bit kekiri "<<e<<endl;

cout<< "\n";
cout<< "      Masukan nilai j : ";
cin >> j;
cout<< "      Masukin nilai k : ";
cin >> k;
cout<< "      Masukin nilai l : ";
cin >> l;

m = j*(k+l);
n =(m>>3);

cout << " Nilai dari m = "<<m<<endl;
cout << " Hasil dari geser 3 bit Kekanan "<<n<<endl;

cout <<" \n ";
if (e<n)   cout<<e<<" Lebih kecil dari "<<n<<endl;
if (e==n) cout<<e<<" sama dengan "<<n<<endl;
if (e!=n) cout<<e<<"  Tidak sama dengan "<<n<<endl;
if (e>n)  cout<<e<<"  Lebih Besar dari "<<n<<endl;

return 0;
}

