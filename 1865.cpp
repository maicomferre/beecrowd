#include <iostream>

using namespace std;

int main()
{
	int l=0; 

	cin >> l;

	string amigo;

	for(int a,i=0; i<l; i++)
	{
		cin >> amigo;
		cin >> a;

		if(amigo != "Thor")
			amigo = "N";
		else
			amigo = "Y";

		cout << amigo << endl;
	}
	return 0;
}