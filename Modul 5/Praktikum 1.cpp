#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
char kata[50];
	cout<<"Masukkan kata\t\t: ";
	cin.getline(kata, sizeof(kata));
		cout<<"Kata yang dibalik\t: ";
for (int i=strlen(kata)-1; i>=0; i--)
	{ cout<<kata[i]; }
		cout<<"\n";

getch();
}

