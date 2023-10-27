#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> valores(3);
	vector<int> backup(3);	

	cin >> valores[0];
	cin >> valores[1];
	cin >> valores[2];

	backup = valores;

	sort(valores.begin(), valores.end());

	cout << valores[0] << endl;
	cout << valores[1] << endl;
	cout << valores[2] << endl << endl;

	cout << backup[0] << endl;
	cout << backup[1] << endl;
	cout << backup[2] << endl;
	return 0;
}