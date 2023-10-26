#include <iostream>

using namespace std;


int main()
{
	int par=0,impar=0,mais=0,menos=0,tmp;

	for(int i=0; i<5; i++)
	{
		cin >> tmp;

		if(tmp % 2 == 0)
			par++;
		else
			impar++;

		if(tmp > 0)
			mais++;
		else if(tmp < 0)
			menos++;
	}
	
	cout << par <<" valor(es) par(es)" << endl;
	cout << impar << " valor(es) impar(es)" << endl;
	cout << mais << " valor(es) positivo(s)" << endl;
	cout << menos << " valor(es) negativo(s)" << endl;

	return 0;
}