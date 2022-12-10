#include <iostream>
using namespace std;
int main(){
	int b, c= 20;
	cout<<"| A |  B |  C"<<endl;
	cout<<"-----------------"<<endl;
	for (int a=0; a<=20; a++){
		b=c-a; 
		cout<<"| "<<a<<"  |"<<b<<"  |" <<c<<endl;
	}
	return 0;
}
