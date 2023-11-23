#include <iostream>

using namespace std;

int main()
{
	short int menor_saldo = 1001, saldo_atual=0,entradas,operacao;

	cin >> entradas;

	for(short int i=0; i<entradas+1; i++)
	{
		cin >> operacao;

		saldo_atual += operacao;

		if(saldo_atual < menor_saldo)
			menor_saldo = saldo_atual;
	}

	cout << menor_saldo << endl;
	return 0;
}

