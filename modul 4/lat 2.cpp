#include <iostream>
using namespace std;

int main(){
	int a,k;
	
	cout << "Masukan nilai awal bilangan : "<<endl;
	cin >> a;
	cout << "Masukan niai akhir bilangan : "<<endl;
	cin >> k;
	
	cout << endl;
	cout << "Menampilkan bilangan genap dari "<<a<<" hingga "<<k<<endl;
	
	while 	(a<=k){
			if (a %2==0){
					cout<<a<<endl;
			}
		a++;
	}
	return 0;
}
