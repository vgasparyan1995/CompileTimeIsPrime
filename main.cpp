#include <iostream>
#include "PrimeChecker.h"

int main()
{
    std::cout << PrimeChecker::IsPrime<13>::value << std::endl;
    std::cout << PrimeChecker::IsPrime<35>::value << std::endl;
    std::cout << PrimeChecker::IsPrime<2>::value << std::endl;
    std::cout << PrimeChecker::IsPrime<3>::value << std::endl;
    std::cout << PrimeChecker::IsPrime<1>::value << std::endl;
}
