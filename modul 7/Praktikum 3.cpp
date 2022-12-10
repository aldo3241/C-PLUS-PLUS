#include <iostream>
using namespace std;

int main()
{
int aziz=70, *defa, *dewi;

cout<<" aziz = 70"<<endl;
cout<<" defa = aziz"<<endl;
cout<<" dewi = aziz + 3"<<endl<<endl;

defa=&aziz;

cout<<" a. Berapakah nilai Defa ?? \n";
cout<<" Nilai Defa = "<<*defa<<endl;

dewi=&aziz;

cout<<" b. Berapakah nilai Dewi ?? \n";
cout<<" Nilai Dewi = "<<*dewi+3<<endl<<endl;
cout<<" aziz = 70"<<endl;
cout<<" defa = &aziz"<<endl;
cout<<" dewi = *aziz + 3"<<endl<<endl;

defa=&aziz;

cout<<" a. Berapakah nilai Defa ?? "<<endl;

cout<<" Nilai Defa = "<<*defa<<endl;
dewi=&aziz;

cout<<" b. Berapakah nilai Dewi ?? "<<endl;
cout<<" Nilai Dewi = "<<*dewi+3;
}
