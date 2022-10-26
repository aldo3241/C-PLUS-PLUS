# include <iostream>
using namespace std;

int main ()
{
	char n;
	
	cout << " please insert a grade (A,B,C,D,E) : ";
	cin >> n;
	
	switch (n)
	{
	case 'A' :
	case 'a' :
		cout << "SUGOI ~Desuwa : " << endl;
		break;	
	case 'B' :
	case 'b' :
		cout << " Ma Ma ikana : " << endl;
		break;	
	case 'C' :
	case 'c' :
		cout << " Gokaku Desuwa >//<" <<endl;
		break;	
	case 'D' :
	case 'd' :
		cout << " Nande ??" << endl;
		break;		
	case 'E' :
	case 'e' :
		cout << " Gomenasai " << endl;
		break;	
	default :
		cout << " chigau no baka  " << endl;
	
	}  
	cout << " kimi wo grade to wa = "<< n << endl;
}
