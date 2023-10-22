#include "TriangleInCircle.h"
#include <fstream>	

void TriangleInCircle::Show() const
{
	std::cout << "___Triangle in Circle___\n";
	Circle::Show();
	Triangle::Show();
}

void TriangleInCircle::WriteInFile(std::string fileName = "Triangle.txt") const
{
	std::ofstream file(fileName);

	if (file.is_open())
	{
		file << "___Triangle In Circle___";
		file << "\n--Circle--\nRadius: " << Circle::GetRadius() << "\nSquare: " << Circle::GetSquare();
		file << "\n--Triangle--\nLeg1: " << Triangle::GetLeg1() << "\nLeg2: " << Triangle::GetLeg2() << "\nHipotenus: " << Triangle::GetHipotenus() << "\nSquare: " << Triangle::GetSquare();
		std::cout << "Triangle is written in file\n";
	}
	else
	{
		std::cout << "Can not open file!\n";
	}
}
