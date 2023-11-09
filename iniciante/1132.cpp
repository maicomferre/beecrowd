#include <iostream>

using namespace std;

int main()
{
	int inicio,fim,soma=0;

	cin >> inicio;
	cin >> fim;

	if(inicio > fim)
	{
		soma = fim;
		fim = inicio;
		inicio = soma;
		soma = 0;
	}

	for(int i=inicio; i<=fim; i++)
		if(i % 13 != 0)
			soma += i;
	cout << soma << endl;

	return 0;
}