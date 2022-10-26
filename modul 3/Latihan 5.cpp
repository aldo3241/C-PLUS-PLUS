#include <iostream>
using namespace std;

int  main()
{
	int m;
	cout << " please input month number = ";
	cin >> m;
	
	
	switch (m) 
	{
		
		case 1:
			cout << " the 1st month is january  "<< endl;
		case 2:
			cout << " the 2st month is february "<< endl;
		case 3:
			cout << " the 3st month is maret    "<< endl;
		case 4:
			cout << " the 4st month is april    "<< endl;
		case 5:
			cout << " the 5st month is may      "<< endl;
		case 6:
			cout << " the 6st month is june     "<< endl;
		case 7:
			cout << " the 7st month is july     "<< endl;
		case 8:
			cout << " the 8st month is august   "<< endl;
		case 9:
			cout << " the 9st month is september"<< endl;
		case 10:
			cout << " the 10st month is october "<< endl;
		case 11:
			cout << " the 11st month is november"<< endl;
		case 12:
			cout << " the 12st month is december"<< endl;
	}
	return 0;
	
}
