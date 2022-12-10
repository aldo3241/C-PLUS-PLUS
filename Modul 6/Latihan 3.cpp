#include <iostream>
using namespace std;

int calcSalesTax (float purchase, float taxRate=0.1);

int main()
{
	float purchase;
	cout<<"Masukan pembelian	: ";
		cin>>purchase;
		
	float tax=calcSalesTax(purchase);
		cout<<"Pajak pembelian adalah	: "<<tax<<endl;
	return 0;
}
int calcSalesTax (float purchase, float taxRate)
{
	return purchase * taxRate;
}