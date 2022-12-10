#include <iostream>
using namespace std;
int main(){

	int c,f,r,k;
	
	cout<<"---------------------------------------------"<<endl;
	cout<<"| CELCIUS | REAMUR | FAHRENHEIT | KELVIN |"<<endl;
	cout<<"---------------------------------------------"<<endl;
	
	for(c=10; c<=100; c+=10){
		f=(1.8*c)+32; r=0.8*c; k=c+273;
	
	cout<<"|"<<c<<"       |"<<r<<"       |"<<f<<"       |"<<k<<"       |"<<endl;
	cout<<"---------------------------------------------"<<endl;
	}
	return 0;
}
