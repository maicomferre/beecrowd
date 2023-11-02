#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int l=0;
	cin >> l;

	cout.setf(ios::fixed);
	for(int i=2; i<=l; i+=2)
		cout << setprecision(0) << i << "^2 = " <<  pow(i,2) << endl;
}