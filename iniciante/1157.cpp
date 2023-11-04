#include <iostream>

using namespace std;

int main()
{
	int entrada = 0;

	cin >> entrada;

	for(int i=1; i<=entrada; i++)
		if(i % entrada == 0 || entrada % i == 0)
			cout << i << endl;

	return 0;
}