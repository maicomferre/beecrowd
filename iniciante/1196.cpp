#include <iostream>

using namespace std;

string teclado = {
	'`','1','2','3','4','5','6','7','8','9','0','-','=',
	'Q','W','E','R','T','Y','U','I','O','P','[',']','\\',
	'A','S','D','F','G','H','J','K','L',';','\'',
	'Z','X','C','V','B','N','M',',','.','/',
};

char corrige_teclado(char entrada)
{
	for(int i=0; i<teclado.size(); i++)
		if(teclado[i] == entrada)
			return teclado[i-1];
	return entrada;
};

int main()
{
	string entrada;

	while(getline(cin,entrada))
	{
		for(int i=0; i<entrada.size(); i++)
			entrada[i] = corrige_teclado(entrada[i]);

		cout << entrada << endl;
	}
	return 0;
}
