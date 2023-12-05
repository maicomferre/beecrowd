#include <iostream>

using namespace std;

int main()
{
	short int x;

	cin >> x;

	for(short int i=1; i<x; i++)
	{
		cout << i << " " << i*2 << " " << i*4 <<endl;
		cout << i << " " << (i*2)+1 << " " << (i*4)+1 <<endl;
	}
	return 0;
}
