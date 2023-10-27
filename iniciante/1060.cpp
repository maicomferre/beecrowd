#include <iostream>

using namespace std;

int main()
{
	int plus=0;
	double t;

	for(int i=0; i<6; i++)
	{
		cin >> t;
		if(t > 0)
			plus++;
	}

	cout << plus << " valores positivos" << endl;

	return 0;
}