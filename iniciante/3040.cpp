#include <iostream>

int main()
{
    unsigned short int n,a,d,g;

    std::cin >> n;

    for(; n>0; n--)
    {
        std::cin >> a;
        std::cin >> d;
        std::cin >> g;

        if(a < 200 || a > 300 | d < 50 || g < 150)
            std::cout << "Nao";
        else 
            std::cout << "Sim";
        
        std::cout << std::endl;
    }
    return 0;
}