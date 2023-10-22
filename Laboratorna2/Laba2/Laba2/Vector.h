#pragma once
class Vector
{
private:
	float* vector;
	size_t size;

public:
	Vector();
	Vector(size_t size);
	Vector(const Vector& other);
	Vector(Vector&& other);
	~Vector();

	float& operator[](size_t index);
	void operator=(const Vector& other);
	void operator=(Vector&& other);

	size_t GetSize() const;

	void ZeroInizialise(size_t size);
	void RandomInizialise();
	void RandomInizialise(size_t size);
	void Show() const;
};

