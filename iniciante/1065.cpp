#include <iostream>

using namespace std;

int main()
{
	int pares=0,tmp;
	
	for(int i=0; i<5; i++)
	{
		cin >> tmp;

		if(tmp % 2 == 0)
			pares++;
	}

	cout << pares << " valores pares" << endl;
}