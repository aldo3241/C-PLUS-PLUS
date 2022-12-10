#include <iostream>
using namespace std;
int main(){
	int sMax;
	int skor[] = {81, 94, 76, 88, 42};
	const int js = sizeof(skor) / sizeof(skor[0]);
	int sMAx = 0;
	
	for (int s=0; s<js; ++s)
		if (skor[s]>sMax)
			sMax = skor[s];
	cout<<"Skor terbaik adalah"<<sMax<<"\n";
}
