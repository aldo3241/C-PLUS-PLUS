#include <iostream>
int main()
{
	float a,b,c,d,e,f;
	std::cout<<"Masukan Nilai A";
	std::cin>>a;
	std::cout<<"Masukan Nilai B";
	std::cin>>b;
	std::cout<<"Masukan Nilai C";
	std::cin>>c;
	std::cout<<"Masukan Nilai D";
	std::cin>>d;
	e=a+b*c/d-b;
	f=(a+b)*c/d*(a-b);
	std::cout<<"Nilai dari e=a+b*c/d-b: "<<f<<std::endl;
	std::cout<<"Nilai dari (a+b)*c/d*(a-b): "<<f<<std::endl;
}
