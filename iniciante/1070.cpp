#include <iostream>

int main()
{
	int x;

	std::cin >> x;

	if(x % 2 == 0)
		x++;

	for(int i=0; i<6; i++,x+=2)
	{
		std::cout << x << std::endl;
	}
	return 0;
}