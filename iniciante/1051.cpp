#include <iostream>
#include <iomanip>


int main()
{
    double renda,calc=0,tmp;

    std::cin >> renda;

    if(renda < 2000.01)
    {
        std::cout << "Isento" << std::endl;
    }
    else
    {
        renda -= 2000.00;

        if(renda > 0.01)
        {   
            calc += renda * .08;
            renda -= 1000.00;
        }

        if(renda > 0.01)
        {
            calc += renda * .18;
        }


        std::cout.setf(std::ios::fixed);
        std::cout << std::setprecision(2);
        std::cout << calc << std::endl;
    }
    return 0;
}
