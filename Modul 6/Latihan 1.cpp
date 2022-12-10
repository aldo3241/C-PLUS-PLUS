#include <iostream>
using namespace std;

void rtukar (int *px,int *py)
{
	int temp;
	temp = *px;
	*px=*py;
	*py=temp;
	
	cout<<"Nilai pada fungsi dengan call by value: "<<endl;
	cout<<" Nilai px="<<*px<<" Nilai py="<<*py<<endl<<endl;
}
void vtukar (int px, int py)
{
	int temp;
	temp = px;
	px=py;
	py=temp;
	
	cout<<"Nilai pada fungsi dengan call by value: "<<endl;
	cout<<" Nilai px="<<px<<" Nilai py="<<py<<endl<<endl;
}

int main()
{
	int a,b;
	a=99; b=11;
	
	//call by reference
	cout<<"Nilai sebelum pemanggilan fungsi "<<endl;
	cout<<" Nilai a="<<a<<" Nilai b="<<b<<endl;
	rtukar(&a,&b);
	cout<<"Nilai sebelum pemanggilan Rtukar"<<endl;
	cout<<" Nilai a="<<a<<" Nilai b="<<b<<endl<<endl<<endl;
	//kembalikan ke nilai semula
	a= 99;
	b= 11;
	
	// call by value
	cout<<"\nNilai sebelum pemanggilan fungsi : "<<endl;
	cout<<" Nilai a="<<a<<" Nilai b="<<b<<endl;
	vtukar(a,b);
	cout<<"\nNilai sebelum pemanggilan fungsi : "<<endl;
	cout<<" Nilai a="<<a<<" Nilai b="<<b<<endl;
	
	return 0;
}

