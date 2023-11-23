#include <iostream>

using namespace std;

int main()
{
	short int top[7] = {1, 3, 5, 10, 25, 50, 100};
	short indice;

	cin >> indice;

	for(short int i=0; i<7; i++)
	{
		if(indice <= top[i])
		{
			cout << "Top " << top[i] << endl;
			break;
		}
	}

	return 0;
}
