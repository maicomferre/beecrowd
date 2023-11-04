#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double n[2],tmp;

	for(int i=1; i>-1;)
	{
		cin >> tmp;

		if(tmp < 0.0 || tmp > 10.0)
		{
			cout << "nota invalida" << endl;
			continue;
		}
		n[i] = tmp;
		i--;
	}
	cout.setf(ios::fixed);
	cout << setprecision(2);
	cout << "media = " << (n[0] + n[1]) / 2.0 << endl;

	return 0;
}