#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double A,B,C;

	cin >> A;
	cin >> B;
	cin >> C;

	cout.setf(ios::fixed);
	cout << setprecision(1);

	if(A+B > C && C+B > A && A+C > B)
		cout << "Perimetro = " << (A+B+C);
	else
		cout << "Area = " << (((A+B) * C) / 2.0);

	cout << endl;
	return 0;
}