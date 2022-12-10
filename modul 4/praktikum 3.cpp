#include <iostream>
using namespace std;

int main(){
	
int tinggi, a, b, x;	
cout<<"Masukkan Tinggi Segitiga : ";cin>>tinggi;

for(a=0; a<tinggi; a++){
	for(b=1; b<tinggi; b++)
	{ 
		cout<< " "; 
	}
for (x=a; x<tinggi; x++)
	{	 
		cout<<"*"; 
	}
	cout<<"\n";
}

for (a=1; a<=tinggi; a++){
	for (b=a; b<tinggi; b++)
	{ 
		cout<<" "; 
	}
for (x=1; x<=a; x++)
	{ 
		cout<<"*"; 
	}
	cout<<"\n";
}
return 0;

}
