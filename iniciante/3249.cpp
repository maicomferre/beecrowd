#include <iostream>

using namespace std;

int main()
{
	int i,venceu=0;
	string txt;

	cin >> i;

	for(; i>0; i--)
	{
		cin >> txt;

		venceu++;
		for(int x=1; x<txt.size(); x++)
			if(txt[x-1] == 'C' && txt[x] == 'D')
			{
				venceu--;
				break;
			}
	}
	
	cout << venceu << endl;

	return 0;
}