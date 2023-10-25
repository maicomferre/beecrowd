#include <iostream>
#include <iomanip>

using namespace std;

struct Produto
{
	int codigo;
	int quantidade;
	double preco;
};


int main()
{
	Produto prod1;
	Produto prod2;

	cin >> prod1.codigo;
	cin >> prod1.quantidade;
	cin >> prod1.preco;
	
	cin >> prod2.codigo;
	cin >> prod2.quantidade;
	cin >> prod2.preco;


	double result = prod1.quantidade * prod1.preco;
	result += prod2.quantidade * prod2.preco;

	cout.setf(ios::fixed);
	cout << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << result << endl;

	return 0;
}