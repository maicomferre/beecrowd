#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	double A,B,C,delta,r1,r2;

	cin >> A;
	cin >> B;
	cin >> C;

	delta = pow(B,2) - 4 * A * C;

	if(A == 0 || B == 0 || C == 0 || delta < 0)
	{
		cout << "Impossivel calcular" << endl;
		return 0;
	}

	delta = sqrt(delta);

	r1 = ((-B + delta) / (2.0 * A));
	r2 = ((-B - delta) / (2.0 * A));

	cout.setf(ios::fixed);
	cout << setprecision(5);
	cout << "R1 = " << r1 << endl;
	cout << "R2 = " << r2 << endl;
	return 0;
}