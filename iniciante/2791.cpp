#include <iostream>

using namespace std;

int main()
{
	short int copo;

	for(short int i=0,t; i<4; i++)
	{
		cin >> t;
		if(t==1)
		{
			copo = i+1;
			break;
		}
	}
	cout << copo << endl;
}
