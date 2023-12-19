#include <iostream>

int main()
{
	short int N;
	int x,y;

	std::cin >> N;

	while(N>0)
	{
		std::cin >> x;
		std::cin >> y;

		std::cout << (x * y) / 2 << " cm2" << std::endl;
		N--;
	}
}
