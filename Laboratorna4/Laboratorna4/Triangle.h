#pragma once
class Triangle
{
	float leg1;
	float leg2;

public:
	Triangle();
	//Triangle(float leg1, float leg2, float hipotenus) : leg1(leg1), leg2(leg2), hipotenus(hipotenus) { }

	virtual float GetSquare() const;
	float GetLeg1() const;
	float GetLeg2() const;
	float GetHipotenus() const;

	void Show() const;
};

