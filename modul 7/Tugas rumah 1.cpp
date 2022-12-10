#include <iostream>
#include <string.h>

using namespace std;
int main()
{
	
void *x;
char phrase[100],capital,result;
int sum;
cout<<"Input Kata : ";
cin.getline(phrase,sizeof(phrase));
x=&phrase[0];
capital=toupper(*(char*)x);
cout<<endl;
cout<<"Hasil : "<<capital;
sum=strlen(phrase)-1;
for(int a=1;a<=sum;a++)
 {
 x=&phrase[a];
 result=*(char*)x;
 if(phrase[a-1]==' ')
 {
 result=toupper(*(char*)x);
 }
 cout<<result;
 }
}

