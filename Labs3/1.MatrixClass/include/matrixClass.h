#ifndef MATRIXCLASS_H
#define MATRIXCLASS_H

#include <iostream>
#include <vector>
#include <stdexcept>

class Matrix {
private:
    std::vector<std::vector<int>> data;

public:
    Matrix(int rows, int cols, int defaultValue = 0);
    Matrix(const std::vector<std::vector<int>>& values);

    int getRows() const;
    int getCols() const;

    // Operator Overloading
    Matrix operator+(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    bool operator==(const Matrix& other) const;

    // Friend function for stream output
    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix);
};

#endif // MATRIXCLASS_H
