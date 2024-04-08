#include <iostream>

int main()
{
	short int lines;
	int answer;

	std::cin >> lines;

	for(short int i=1; i<=lines; i++)
	{
		std::cin >> answer;
		std::cout << "resposta " << i << ": " << answer << std::endl;
	}

	return 0;
}
