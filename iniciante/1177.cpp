#include <iostream>

using namespace std;

int main()
{
	int T;

	cin >> T;

	for(int i=0,c=0; i<1000; i++,c++)
	{
		if(c >= T)
			c = 0;
		cout << "N[" << i << "] = " <<	c << endl;

	}
	
	return 0;

}