#include <iostream>
#include "TriangleInCircle.h"

int main()
{
	std::string fileName = "Triangle.txt";

	TriangleInCircle triangle;
	triangle.Show();

	triangle.WriteInFile(fileName);
}
