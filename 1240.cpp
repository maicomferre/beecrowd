#include <iostream>
#include <string>

int main()
{
    std::string A,B;
    unsigned short int sizea,sizeb,n;
    bool encaixa = true;

    std::cin >> n;

    for(; n>0; n--)
    {
        std::cin >> A;
        std::cin >> B;

        sizea = size(A)-1;
        sizeb = size(B)-1;

        if(sizeb > sizea)
        {
            std::cout << "nao encaixa" << std::endl;
            continue;
        }

        while(sizeb > 0)
        {
            if(A[sizea] != B[sizeb])
            {
                std::cout << "nao encaixa" << std::endl;
                encaixa = false;
                break;
            }

            sizeb--;
            sizea--;
        }

        if(encaixa)
            std::cout << "encaixa" << std::endl;
        else
            encaixa = true;
    }
    return 0;
}