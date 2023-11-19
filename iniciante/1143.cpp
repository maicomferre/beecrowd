#include <iostream>
#include <math.h>

int main()
{
	int x;

	std::cin >> x;

	for(int i=1; i<=x; i++)
		std::cout << i << " " << pow(i,2) << " " << pow(i,3) << std::endl;

	return 0;
}