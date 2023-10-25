#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double Km,Combustivel;

	cin >> Km;
	cin >> Combustivel;

	cout.setf(ios::fixed);
	cout << setprecision(3) << (Km / Combustivel) << " km/l" << endl;
	return 0;
}