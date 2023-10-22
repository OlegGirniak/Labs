#pragma once

ref class Calculator
{
private:
	double x;
	double y;
	double z;

public:
	Calculator();

	Calculator(double x, double y, double z);
	
	void SetX(double x);
	void SetY(double y);
	void SetZ(double z);

	double CalculateB();
	
	double CalculateA(double b);
};

