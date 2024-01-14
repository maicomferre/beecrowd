#include <iostream>

#define A 0
#define B 1
#define C 2


int main()
{
    char v[3];

    std::cin >> v[A];
    std::cin >> v[B];
    std::cin >> v[C];

    std::cout << "A = " << v[A] << ", B = " << v[B] << ", C = " << v[C] << std::endl;
    std::cout << "A = " << v[B] << ", B = " << v[C] << ", C = " << v[A] << std::endl;
    std::cout << "A = " << v[C] << ", B = " << v[A] << ", C = " << v[B] << std::endl;
    return 0;
}