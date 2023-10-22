#pragma once
class Circle
{
	float radius;
public:
	Circle() : radius(0) { }
	Circle(float radius) : radius(radius) { }

	void SetRadius(float radius);

	virtual float GetSquare() const;	
	float GetRadius() const;

	void Show() const;
};

