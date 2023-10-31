#include <iostream>

using namespace std;

int main()
{
	string txt;

	while(cin >> txt)
	{
		int b1sum=0,b2sum=0;
		for(int i=0,m=9,b1,b2; i<9; i++,m--)
		{
			if(i == 3 || i == 6)
				cout << ".";

			cout << txt[i];


			b1 = txt[i] - 48;
			b2 = b1;


			b1 *= m;
			b1sum += b1;

			b2 *= i+1;
			b2sum += b2;

		}
		if(b1sum % 11 == 10)
			b1sum = 0;

		if(b2sum % 11 == 10)
			b2sum = 0;
		

		cout << "-" << (b2sum % 11)  << (b1sum % 11) << endl;
	}

}