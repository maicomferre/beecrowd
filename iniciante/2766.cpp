#include <iostream>
#include <string>

int main()
{
    std::string text;

    for(short int x=0; x<10; x++)
    {
        std::cin >> text;
        if(x == 2 || x == 6 || x == 8)
            std::cout << text << std::endl;
    }
    return 0;
}
