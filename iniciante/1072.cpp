#include <iostream>

using namespace std;

int main()
{
	int lines,in=0,out=0,tmp;

	cin >> lines;

	for(int i=0; i<lines; i++)
	{
		cin >> tmp;
		if(tmp >= 10 && tmp <= 20)
			in++;
		else
			out++;
	}

	cout << in << " in" << endl;
	cout << out << " out" << endl;
	return 0;
}