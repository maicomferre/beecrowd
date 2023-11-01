#include <iostream>

using namespace std;

int main()
{
	int linhas,valor;

	cin >> linhas;

	for(; linhas>0; linhas--)
	{
		cin >> valor;
		cout << ((valor%2==0) ? 0 : 1) << endl;
	}

	return 0;
}