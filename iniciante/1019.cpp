#include <iostream>

using namespace std;

int main()
{
	int date,h=0, m=0, s=0;

	cin >> date;

	if(date > 3599)
	{
		h = date / 3600;

		date = date % 3600;
	}

	if(date > 59)
	{
		m = date / 60;

		date = date % 60;
	}

	s = date;

	cout << h << ":" << m << ":" << s << endl;

	return 0;
}