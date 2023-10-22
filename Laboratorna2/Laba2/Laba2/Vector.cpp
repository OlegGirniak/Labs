#include "Vector.h"
#include <iostream>

Vector::Vector() : size(0), vector(nullptr) { }

Vector::Vector(size_t size) : size(size), vector(size != 0 ? new float[size]{} : nullptr) { }

Vector::Vector(const Vector& other)
{
	size = other.size;

	vector = new float[size];

	for (size_t i = 0; i < size; i++)
		vector[i] = other.vector[i];
}

Vector::Vector(Vector&& other)
{
	size = other.size;

	vector = new float[size];

	for (size_t i = 0; i < size; i++)
		vector[i] = other.vector[i];
}

Vector::~Vector()
{
	if (vector != nullptr)
	{
		delete[] vector;
		vector = nullptr;

		size = 0;
	}
}

float& Vector::operator[](size_t index)
{
	if (index < size)
	{
		return vector[index];
	}
}

void Vector::operator=(const Vector& other)
{
	if (vector != nullptr && size > 0)
	{
		delete[] vector;
	}

	size = other.size;

	vector = new float[size];

	for (size_t i = 0; i < size; i++)
		vector[i] = other.vector[i];

}

void Vector::operator=(Vector&& other)
{
	if (vector != nullptr && size > 0)
	{
		delete[] vector;
	}

	size = other.size;

	vector = new float[size];

	for (size_t i = 0; i < size; i++)
		vector[i] = other.vector[i];
}

size_t Vector::GetSize() const
{
	return size;
}

void Vector::ZeroInizialise(size_t size)
{
	if (vector == nullptr && size > 0)
	{
		this->size = size;

		vector = new float[this->size] {};
	}
	else
	{
		return;
	}
}

void Vector::RandomInizialise()
{
	if (size > 0)
	{
		for (size_t i = 0; i < size; i++)
		{
			vector[i] = rand() % 100;
		}
	}
	else
	{
		return;
	}
}

void Vector::RandomInizialise(size_t size)
{
	if (vector == nullptr && size > 0)
	{
		this->size = size;

		vector = new float[this->size];

		for (size_t i = 0; i < this->size; i++)
		{
			vector[i] = rand() % 100;
		}
	}
	else
	{
		return;
	}
}

void Vector::Show() const
{
	if (size > 0)
	{
		for (size_t i = 0; i < size; i++)
		{
			std::cout << vector[i] << "\t";
		}
		std::cout << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout << "\tVector is empty.\n";
	}
}



