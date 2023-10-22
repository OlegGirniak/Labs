#include "Circle.h"
#include <iostream>

#define M_PI (3.14159265358979323846)

void Circle::SetRadius(float radius)
{
	this->radius = radius;
}

float Circle::GetSquare() const
{
	return pow(radius, 2) * M_PI;
}

float Circle::GetRadius() const
{
	return radius;
}

void Circle::Show() const
{
	std::cout << "-- Circle --\nRadius: " << radius << "\nSquare: " << GetSquare() << std::endl;
}


