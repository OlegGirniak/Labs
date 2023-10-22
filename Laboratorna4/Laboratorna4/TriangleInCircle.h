#pragma once
#include "Circle.h"
#include "Triangle.h"
#include <iostream>

class TriangleInCircle : public Circle, public Triangle
{
public:
	TriangleInCircle() : Triangle(), Circle() { SetRadius(Triangle::GetHipotenus() / 2); }

	void Show() const;
	void WriteInFile(std::string fileName) const;
};

