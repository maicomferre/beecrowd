#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a[3];

	cin >> a[0];
	cin >> a[1];
	cin >> a[2];

	double tmp = 0;
	for(int r=0; r<3; r++)
		for(int i=1; i<3; i++)
			if(a[i] > a[i-1])
			{
				tmp = a[i-1];
				a[i-1] = a[i];
				a[i] = tmp;
			}


	if(a[0] >= a[1] + a[2])
	{
		cout << "NAO FORMA TRIANGULO" << endl;
	}
	else 
	{

		a[0] = pow(a[0],2.0);
		a[1] = pow(a[1],2.0);
		a[2] = pow(a[2],2.0);

		tmp = a[1] + a[2];

		if(a[0] == tmp)
		{
			cout << "TRIANGULO RETANGULO" << endl;
		}
		if(a[0] > tmp)
		{
			cout << "TRIANGULO OBTUSANGULO" << endl;
		}
		if(a[0] < tmp)
		{
			cout << "TRIANGULO ACUTANGULO" << endl;
		}
		if(a[0] == a[1] && a[1] == a[2])
		{
			cout << "TRIANGULO EQUILATERO" << endl;
		}
		if( 
			(a[0] == a[2] && a[0] != a[2]) || // A = B && A != C 
			(a[0] == a[2] && a[0] != a[1]) || // A = C && A != B
			(a[1] == a[2] && a[1] != a[0]) || // B = C && B != A
			(a[1] == a[0] && a[1] != a[2]) || // B = A && B != C
			(a[2] == a[1] && a[2] != a[0]) || // C = B && C != A
			(a[2] == a[0] && a[2] != a[1])    // C = A && C != B
		){
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}
	return 0;
}