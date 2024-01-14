#include <iostream>

int main()
{
    for(short int i=1, j=60; j>=0; j-=5, i+=3)
        std::cout << "I=" << i << " J=" << j << std::endl;
    return 0;
}