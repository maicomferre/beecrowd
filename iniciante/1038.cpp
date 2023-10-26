#include <iostream>
#include <iomanip>

using namespace std;

double valores[5] = {
	4.00,
	4.50,
	5.00,
	2.00,
	1.50,
};


int main()
{
	int A, B;

	cin >> A;
	cin >> B;

	cout.setf(ios::fixed);
	cout << "Total: R$ " << setprecision(2);
	cout <<  valores[A-1] * B << endl;

	return 0;
}