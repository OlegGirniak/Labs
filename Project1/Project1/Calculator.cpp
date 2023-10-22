#pragma once
#include "Calculator.h"
#include <cmath>

Calculator::Calculator()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Calculator::Calculator(double x, double y, double z) : x(x), y(y), z(z) { }

void Calculator::SetX(double x)
{
	this->x = x;
}

void Calculator::SetY(double y)
{
	this->y = y;
}

void Calculator::SetZ(double z)
{
	this->z = z;
}

double Calculator::CalculateB()
{
	double b1 = 1 + pow(cos(y - 2 * x * x * x), 2);
	double b2 = 2 + pow(abs(x), 3.0 / 2) - pow(sin(pow(abs(z), 0.2)), 2);

	double b = b1 / b2 + pow(log(abs(z - y)) , 2);

	return b;
}

double Calculator::CalculateA(double b)
{
	double a1 = z + pow(sin(pow(abs(y + b), 1.3)), 2);

	double a2 = pow(z, 2) + abs((pow(x, 2) + y) / (y + pow(x, 3) / 3)) - pow(log(abs(z)), 2);

	double a = pow(y, 2) + a1 / a2;

	return a;
}
