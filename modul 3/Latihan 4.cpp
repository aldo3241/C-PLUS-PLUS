#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << " Masukan sebuah bilangan bulat		: ";
	cin >> x;
	cout << " Masukan sebuah bilangan bulat lain 	: ";
	cin >> y;
	
	if (x > 0 && y >0) {
		cout << "Kedua bilangan tersebut adalah bilangan POSITIF \n";
	}
	else if (x > 0 || y > 0){
		cout << "Salah satu bilangan tersebut adalah bilangan POSITIF \n";
	}
	else {
		cout << "Kedua bilangan tersebut BUKAN bilangan POSITIF \n";
	}
	return 0;
}