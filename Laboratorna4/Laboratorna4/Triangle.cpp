#include "Triangle.h"
#include <iostream>

Triangle::Triangle()
{
    do
    {
        std::cout << "Enter leg1: ";
        std::cin >> leg1;
        std::cout << "Enter leg2: ";
        std::cin >> leg2;
        
        system("cls");

    } while (leg1 <= 0 || leg2 <= 0);
}

float Triangle::GetSquare() const
{
    return leg1 * leg2 / 2;
}

float Triangle::GetLeg1() const
{
    return leg1;
}

float Triangle::GetLeg2() const
{
    return leg2;
}

float Triangle::GetHipotenus() const
{
    return sqrt(pow(leg1, 2) + pow(leg2, 2));
}

void Triangle::Show() const
{
    std::cout << "--Triangle--\nLeg1: " << leg1 << "\nLeg2: " << leg2 << "\nHipotenus: " << GetHipotenus() << "\nSquare: " << GetSquare() << std::endl;
}
