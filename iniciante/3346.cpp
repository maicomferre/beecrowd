#include <iostream>
#include <iomanip>

int main()
{
    double F1,F2;

    std::cin >> F1;
    std::cin >> F2;
    
    F1 = 1 + (F1 / 100.0);
    F2 = 1 + (F2 / 100.0);

    F2 = ((F1 * F2) -1) * 100.0;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(6);
    std::cout << F2 << std::endl;
}