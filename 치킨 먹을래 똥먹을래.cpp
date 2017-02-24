#include <iostream>

using namespace std;

void main(void)
{
	int iYou = 0;
	
	cout << "치킨 또는 치킨 먹을래?" << endl;
	cin >> iYou;
	if	(iYou > 1)
	{
		cout << "응, 치킨 먹을게." << endl;
	}
	else
	{
		cout << "응, 치킨 먹을게." << endl;
	}
	
	cout << "치킨 또는 똥 먹을래?" << endl;
	cin >> iYou;
	if (iYou > 1)
	{
		cout << "응 치킨 먹을게." << endl;
	}
	else
	{
		cout << "안 먹으면 안 되겠니...." << endl;
	}

	cout << "똥 또는 똥 먹을래?" << endl;
	cin >> iYou;
	if (iYou > 1)
	{
		cout << "응 똥 먹을게." << endl;
	}
	else
	{	
		cout << "안 먹으면 안되겠니...." << endl;
	}
}
