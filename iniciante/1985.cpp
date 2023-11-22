#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x,sum;
	double result,tmp;

	cin >> x;

	for(int i=0; i<x; i++)
	{
		cin >> tmp;
		cin >> sum;

		result += (tmp - 1000 + 0.50) * sum;
	}
	cout.setf(ios::fixed);
	cout << setprecision(2);
	cout << result << endl;

	return 0;
}
