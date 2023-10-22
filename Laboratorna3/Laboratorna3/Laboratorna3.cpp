#include <iostream>
#include "Rectangle.h"

int main()
{
	Rectangle rectangle(3, 4);
	Rectangle rectangle2(1, 1.5);

	rectangle.ShowInformation();
	rectangle2.ShowInformation();

	try
	{
		Rectangle result = rectangle - rectangle2;
		result.ShowInformation();
	}
	catch (const std::exception& exc)
	{
		std::cout << exc.what() << std::endl;
	}
}

