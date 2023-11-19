#include <iostream>

using namespace std;

int main()
{
	int nota;

	cin >> nota;

	if(nota == 0)
		cout << "E";
	else if(nota < 36)
		cout << "D";
	else if(nota < 61)
		cout << "C";
	else if(nota < 86)
		cout << "B";
	else
		cout << "A";

	cout << endl;
	return 0;
}