#include <iostream>
#include <ctime>

#include "Vector.h"
#include "Matrix.h"



int main()
{
    srand(static_cast<int>(time(nullptr)));

    // MATRIX SUM: m1 + m2
    {
        std::cout << "\t| MATRIX SUM\n " << std::endl;

        std::cout << "Matrix 1:\n\n";
        Matrix m1(3, 4);
        m1.RandomInizialise();
        m1.Show();

        std::cout << "Matrix 2:\n\n";
        Matrix m2(3, 4);
        m2.RandomInizialise();
        m2.Show();
        
        std::cout << "Result\n\n";
        Matrix result = m1 + m2;

        result.Show();

        system("pause");
        system("cls");
    }

    // MATRIX SUBSTRACTION: m1 - m2
    {
        std::cout << "\t| MATRIX SUBSTRACTION\n " << std::endl;

        std::cout << "Matrix 1:\n\n";
        Matrix m1(3, 4);
        m1.RandomInizialise();
        m1.Show();

        std::cout << "Matrix 2:\n\n";
        Matrix m2(3, 4);
        m2.RandomInizialise();
        m2.Show();

        std::cout << "Result\n\n";
        Matrix result = m1 - m2;

        result.Show();

        system("pause");
        system("cls");
    }

    // MATRIX VECTOR MULTIPLICATION: m1 * v1
    {
        std::cout << "Matrix 1:\n\n";
        Matrix m1(3, 1);
        m1.RandomInizialise();
        m1.Show();

        std::cout << "Vector 1:\n\n";
        Vector v1(4);
        v1.RandomInizialise();
        v1.Show();

        std::cout << "Result\n\n";
        Matrix result = m1 * v1;

        result.Show();

        system("pause");
        system("cls");
    }

    // MATRIX MULTIPLICATION: m1 * m2
    {
        std::cout << "\t| MATRIX MULTIPLICATION\n " << std::endl;

        std::cout << "Matrix 1:\n\n";
        Matrix m1(3, 4);
        m1.RandomInizialise();
        m1.Show();

        std::cout << "Matrix 2:\n\n";
        Matrix m2(4, 2);
        m2.RandomInizialise();
        m2.Show();

        std::cout << "Result\n\n";
        Matrix result = m1 * m2;

        result.Show();

        system("pause");
        system("cls");
    }

    {
        Matrix m1(2, 2);
        m1.RandomInizialise();
        m1.Show();

        float averageM1 = m1.AverageMatrix();

        std::cout << "Average: " << averageM1 << std::endl;
    }
}


