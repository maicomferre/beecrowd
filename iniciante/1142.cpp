#include <iostream>

using namespace std;

int main()
{
	int linhas,v=1;

	cin >> linhas;

	for(int i=0; i<linhas; i++,v+=4)
	{
		cout << v << " " << v+1 << " " << v+2 << " PUM" << endl;
	}

	return 0;
}