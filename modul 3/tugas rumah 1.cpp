#include <iostream>
using namespace std;

int main ()
{
	float i,nk,nt,nu,na;
	
	cout << "Penilaian Nilai Murid ";
	cout << "\nNilai keaktifan = ";
	cin >> nk;
	cout << "Nilai tugas = ";
	cin >> nt;
	cout << "Nilai ujian = ";
	cin >> nu;
	
		nk = nk * 0.2;
		nt = nt * 0.3;
		nu = nu * 0.5;
		na = nk + nt + nu;
		
	cout << "Nilai Akhir = "<<na<<endl;
	
	if (na>91)
	{
	cout << "A";
	cout << "\nSelamat! Anda lulus dengan nilai yang EXCELLENT!";
	}
	else if (na>86)
	{
	cout << "A-";
	cout << "\nSelamat! Anda lulus dengan nilai yang EXCELLENT!";
	}
	else if (na>81)
	{
	cout << "B+" <<endl;
	cout << "Anda lulus dengan baik, tingkatkan terus prestasi Anda";
	}
	else if (na>76)
	{
	cout << "B"<<endl;
	cout << "Anda lulus dengan baik, tingkatkan terus prestasi Anda";
	}
	else if (na>66)
	{
	cout << "B-"<<endl;
	cout << "Anda lulus dengan baik, tingkatkan terus prestasi Anda";
	}
	else if (na>56)
	{
	cout << "C"<<endl;
	cout << "Anda lulus, tingkatkan lagi pencapaian Anda";
	}
	else if (na>45)
	{
	cout << "D"<<endl;
	cout << "Maaf, Anda belum dapat diluluskan. Tingkatkan terus belajar Anda";
	}
	else 
	{
	cout << "E"<<endl;
	cout << "Maaf, Anda belum dapat diluluskan. Tingkatkan terus belajar Anda";
	}
		
}
