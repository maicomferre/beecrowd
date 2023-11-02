#include <iostream>

using namespace std;

int main()
{
	int come[6] = {300, 1500, 600, 1000, 150, 225};
	int in,out=0;

	for(int i=0; i<5; i++)
	{
		cin >> in;
		out += come[i] * in;
	}
	out += come[5];

	cout << out << endl;

	return 0;
}