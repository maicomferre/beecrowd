#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int plus=0;
	double media=0,tmp;



	for(int i=0; i<6; i++)
	{
		cin >> tmp;

		if(tmp <= 0.0)continue;

		media += tmp;
		plus++;
	}

	cout << plus << " valores positivos" << endl;
	cout.setf(ios::fixed);
	cout << setprecision(1) << (media / plus) << endl;

	return 0;
}