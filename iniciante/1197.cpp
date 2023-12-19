#include <iostream>

int main()
{
	int t,v;

	while(std::cin >> v && std::cin >> t)
		std::cout << (v * t) * 2 << std::endl;

	return 0;
}
