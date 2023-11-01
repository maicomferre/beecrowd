#include <iostream>

using namespace std;

int main()
{
	for(int i=1,J,c=0; i<=10; i+=2)
	{
		J = i+6;

		for(; c < 3; c++,J--)
			cout << "I=" << i << " J=" << J << endl;
		c = 0;
	}
}