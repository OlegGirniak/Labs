#pragma once
#include <iostream>
#include <exception>

class Rectangle
{
	float length;
	float width;

public:
	Rectangle() : length(0), width(0) { }
	Rectangle(float length = 0, float width = 0) : length(length), width(width) { }

	float GetLength() const { return length; }
	float GetWidth() const { return width; }
	float GetSquare() const { return length * width; }
	float GetDiagonal() const { return sqrt(pow(length, 2) + pow(width, 2)); }

	void ShowInformation() const;

	void operator-=(float difference);

	Rectangle operator--();
	Rectangle operator--(int);

	Rectangle operator++();
	Rectangle operator++(int);

	Rectangle operator-(const Rectangle& other);
};

