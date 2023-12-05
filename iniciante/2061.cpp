#include <iostream>

using namespace std;

int main()
{
	short int janelas,linhas;
	string tmp;

	cin >> janelas;
	cin >> linhas;

	for(; linhas > 0; linhas--)
	{
		cin >> tmp;

		if(tmp == "fechou")
			janelas++;
		else if(tmp == "clicou")
			janelas--;
	}

	cout << janelas << endl;
	return 0;
}
