#include <iostream>
#include <map>

std::map <int,std::string> cidades = {
	{61, "Brasilia"},
	{71, "Salvador"},
	{11, "Sao Paulo"},
	{21, "Rio de Janeiro"},
	{32, "Juiz de Fora"},
	{19, "Campinas"},
	{27, "Vitoria"},
	{31, "Belo Horizonte"},
};

int main()
{
	int ddd;

	std::cin >> ddd;

	if(cidades.count(ddd) == 0)
		std::cout << "DDD nao cadastrado" << std::endl;
	else
		std::cout << cidades[ddd] << std::endl;

	return 0;
}