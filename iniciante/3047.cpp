#include <iostream>

int main()
{
	int M,A,B,C;

	std::cin >> M;
	std::cin >> A;
	std::cin >> B;

	C = M - (A + B);

	if(C < A || C < B)
		M = (A > B) ? A : B;
	else
		M = C;

	std::cout << M << std::endl;

	return 0;
}