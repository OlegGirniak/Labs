#include "Rectangle.h"

void Rectangle::ShowInformation() const
{
	std::cout << "Length: " << length << "\nWidth: " << width << "\nDiagonal: " << GetDiagonal() << "\nSquare: " << GetSquare() << std::endl;
	std::cout << std::endl;
}

void Rectangle::operator-=(float difference)
{
	if (((length - difference) <= 0) || ((width - difference) <= 0))
	{
		throw std::exception("Can not -=\n");
	}
	else
	{
		length -= difference;
		width -= difference;
	}
}

Rectangle Rectangle::operator--()
{
	Rectangle tmpRectangle(*this);

	length /= 1.1;
	width /= 1.1;

	return tmpRectangle;
}

Rectangle Rectangle::operator--(int)
{
	length /= 1.1;
	width /= 1.1;

	return *this;
}

Rectangle Rectangle::operator++()
{
	Rectangle tmpRectangle(*this);

	length *= 1.1;
	width *= 1.1;

	return tmpRectangle;
}

Rectangle Rectangle::operator++(int)
{
	length *= 1.1;
	width *= 1.1;

	return *this;
}

Rectangle Rectangle::operator-(const Rectangle& other)
{
	if (width < other.width || length < other.length)
	{
		throw std::exception("Can not -\n");
	}
	else
	{
		return Rectangle(length - other.length, width - other.width);
	}
}
