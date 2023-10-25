#include <iostream>
#include <iomanip>

int main()
{
	double raio;

	std::cin >> raio;

	raio = 3.14159 * (raio*raio);


	std::cout.setf(std::ios::fixed);
	std::cout << "A=" << std::setprecision(4) << raio << std::endl;

	return 0;
}