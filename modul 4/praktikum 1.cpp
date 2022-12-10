#include <iostream>
#include <string>
using namespace std;

int main(){
string k;

cout << " Masukan kata = ";
cin >> k;

for (int a=0; a<=k.length();a++)
	{
	cout << k.substr(a,k.length() -a )<<endl;	
	}
	
	return 0;
}
