#include <iostream>

using namespace std;

int main()
{
	float x,y;

	cin >> x;
	cin >> y;

	if(x == 0 && y == 0)
	{
		cout << "Origem" << endl;
	}
	else if(x == 0)
	{
		cout << "Eixo Y" << endl;
	}
	else if(y == 0)
	{
		cout << "Eixo X" << endl;
	}
	else if(x > 0)
	{
		cout << ((y > 0) ? ("Q1") : ("Q4")) << endl;
	}
	else if(x < 0)
	{
		cout << ((y > 0) ? ("Q2") : ("Q3")) << endl;
	}

	return 0;
}