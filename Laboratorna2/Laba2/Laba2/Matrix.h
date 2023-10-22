#pragma once

class Vector;

class Matrix
{
private:
	size_t rows;
	size_t cols;
	Vector* matrix;

public:
	Matrix();
	Matrix(const Matrix& other);
	Matrix(Matrix&& other);
	Matrix(size_t rows, size_t cols);
	~Matrix();

	Vector& operator[](size_t index);
	void operator=(const Matrix& other);
	void operator=(Matrix&& other);
	void operator=(const Vector& vector);
	Matrix operator+(Matrix& other);
	Matrix operator-(Matrix& other);
	Matrix operator*(Matrix& other);
	Matrix operator*(Vector& other);

	float AverageMatrix();
	void RandomInizialise();
	void Show() const;

};

