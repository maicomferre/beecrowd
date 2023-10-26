#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double in;

	cin >> in;

	in = (4/3.0) * 3.14159 * (in*in*in);

	cout.setf(ios::fixed);
	cout << setprecision(3);
	cout << "VOLUME = " << in << endl;

	return 0;
}