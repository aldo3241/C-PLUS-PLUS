#include <iostream>
using namespace std;

int main()
{
	int r;
	
	cout << " daftar rumus luas permukaan "; 
	cout << " \n 1 bola \n 2 kubus \n 3 balok \n 4 tabung \n 5 kerucut \n 6 dimas segiempat \n 7 tahun kabisat "; 

	cout << "\n pilih rumus 1-7 >///< : ";
	cin >> r;
	
	switch(r){
	
	case 1:
		cout << " 4 * phi * r * r ";
		break;
	case 2:
		cout << " 6 * s * s ";
		break;
	case 3:
		cout << " L = 2 * (pl+pt+lt) ";
		break;
	case 4:
		cout << " 2 * phi * r (R + t)";
		break;
	case 5:
		cout << " phi * r (s + r)";
		break;
	case 6:
		cout << " luas alas + jumlah luas sisi tegak limas ";
		break;
	case 7:
		cout << " tahun / 400 tahun ";
		break;
	default:
		cout << " jigau desu >///<";
}
	
	
	return 0;
}
