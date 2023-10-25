#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main()
{
	int notas[6] = {100,50,20,10,5,2};
	int modeas[6] = {100,50,25,10,5,1};
	int calc;
	double entrada;

	while(cin >> entrada)
	{

		cout << "NOTAS:" << endl;

		for(int i=0; i<6; i++)
		{
			if(entrada > 0)
				calc = (int)entrada / notas[i];

			cout << calc << " nota(s) de R$ " << notas[i]  << ".00" << endl;

			if(calc > 0)
				entrada -= notas[i] * calc;

			calc = 0;
		}

		cout << "MOEDAS:" << endl;

		entrada = round(entrada * 100);

		cout.setf(ios::fixed);
		for(int i=0; i<6; i++)
		{
			if(entrada > 0)
				calc = (int)entrada / modeas[i];

			cout << calc << " moeda(s) de R$ ";
			cout << setprecision(2) << modeas[i] / 100.0 << endl;

			if(calc > 0)
				entrada -= modeas[i] * calc;

			calc = 0;
		}
	}
	return 1;
}
