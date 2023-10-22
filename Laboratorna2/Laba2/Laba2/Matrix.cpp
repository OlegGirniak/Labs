#include "Matrix.h";
#include "Vector.h"

Matrix::Matrix()
{
	matrix = nullptr;
	rows = 0; 
	cols = 0;
}

Matrix::Matrix(const Matrix& other)
{
	if (other.rows > 0 && other.cols > 0)
	{
		if (matrix != nullptr)
		{
			delete[] matrix;
		}

		rows = other.rows;
		cols = other.cols;

		matrix = new Vector[other.rows];

		for (size_t i = 0; i < rows; i++)
		{
			matrix[i] = other.matrix[i];
		}
	}
}

Matrix::Matrix(Matrix&& other)
{
	if (other.rows > 0 && other.cols > 0)
	{
		if (matrix != nullptr)
		{
			delete[] matrix;
		}

		rows = other.rows;
		cols = other.cols;

		matrix = new Vector[other.rows];

		for (size_t i = 0; i < rows; i++)
		{
			matrix[i] = other.matrix[i];
		}
	}
}

Matrix::Matrix(size_t rows, size_t cols)
{
	this->rows = rows;
	this->cols = cols;

	if (rows > 0 && cols > 0)
	{
		matrix = new Vector[rows];
		for (size_t i = 0; i < rows; i++)
		{
			matrix[i].ZeroInizialise(cols);
		}
	}
}

Matrix::~Matrix()
{
	delete[] matrix;
	rows = 0;
	cols = 0;
}

Vector& Matrix::operator[](size_t index)
{
	if (index >= 0)
	{
		return matrix[index];
	}
}

void Matrix::operator=(const Matrix& other)
{
	if (matrix != nullptr)
	{
		delete[] matrix;
	}

	rows = other.rows;
	cols = other.cols;

	matrix = new Vector[rows];
	for (size_t i = 0; i < rows; i++)
	{
		matrix[i] = other.matrix[i];
	}
}

void Matrix::operator=(Matrix&& other)
{
	if (matrix != nullptr)
	{
		delete[] matrix;
	}

	rows = other.rows;
	cols = other.cols;

	matrix = new Vector[rows];
	for (size_t i = 0; i < rows; i++)
	{
		matrix[i] = other.matrix[i];
	}
}

void Matrix::operator=(const Vector& vector)
{
	if (matrix != nullptr)
	{
		delete[] matrix;
	}

	cols = vector.GetSize();

	matrix = new Vector[1];

	matrix[0] = vector;
}

Matrix Matrix::operator+(Matrix& other)
{
	if (rows == other.rows && cols == other.cols)
	{
		Matrix result(rows, cols);

		for (size_t i = 0; i < rows; i++)
		{
			for (size_t j = 0; j < cols; j++)
			{
				result.matrix[i][j] = matrix[i][j] +  other.matrix[i][j];
			}
		}

		return result;
	}
	else
	{
		return Matrix();
	}
}

Matrix Matrix::operator-(Matrix& other)
{
	if (rows == other.rows && cols == other.cols)
	{
		Matrix result(rows, cols);

		for (size_t i = 0; i < rows; i++)
		{
			for (size_t j = 0; j < cols; j++)
			{
				result.matrix[i][j] = matrix[i][j] - other.matrix[i][j];
			}
		}
		return result;
	}
	else
	{
		return Matrix();
	}
}

Matrix Matrix::operator*(Matrix& other)
{
	Matrix result(rows, other.cols);

	if (cols == other.rows)
	{
		Matrix result(rows, other.cols);

		for (int i = 0; i < rows; ++i) 
		{
			for (int j = 0; j < other.cols; ++j) 
			{
				result[i][j] = 0;

				for (int k = 0; k < cols; ++k) 
				{
					result[i][j] += matrix[i][k] * other[k][j];
				}
			}
		}
		return result;
	}
	return Matrix();
}

Matrix Matrix::operator*(Vector& other)
{
	if (cols == 1)
	{
		Matrix matrixFromVector;

		matrixFromVector = other;
		matrixFromVector.rows = 1;

		Matrix result(rows, other.GetSize());

		return *this * matrixFromVector;
	}
	return Matrix();
}

float Matrix::AverageMatrix()
{
	if (rows == 0 || cols == 0)
	{
		return 0;
	}

	float result = 0;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			result += matrix[i][j];
		}
	}

	return result / (rows * cols);
}

void Matrix::RandomInizialise()
{
	for (size_t i = 0; i < rows; i++)
	{
		matrix[i].RandomInizialise();
	}
}

void Matrix::Show() const
{
	for (size_t i = 0; i < rows; i++)
	{
		matrix[i].Show();
	}
}
