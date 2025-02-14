#include "matrixClass.h"

// Constructor: Initialize matrix with a given size and default value
Matrix::Matrix(int rows, int cols, int defaultValue) {
    if (rows <= 0 || cols <= 0) {
        throw std::invalid_argument("Matrix dimensions must be positive.");
    }
    data.assign(rows, std::vector<int>(cols, defaultValue));
}

// Constructor: Initialize matrix from a given 2D vector
Matrix::Matrix(const std::vector<std::vector<int>>& values) : data(values) {}

// Getters for dimensions
int Matrix::getRows() const { return data.size(); }
int Matrix::getCols() const { return data[0].size(); }

// Overload Addition (+)
Matrix Matrix::operator+(const Matrix& other) const {
    if (getRows() != other.getRows() || getCols() != other.getCols()) {
        throw std::invalid_argument("Matrix dimensions must match for addition.");
    }

    Matrix result(getRows(), getCols());
    for (size_t i = 0; i < getRows(); ++i) {
        for (size_t j = 0; j < getCols(); ++j) {
            result.data[i][j] = data[i][j] + other.data[i][j];
        }
    }
    return result;
}

// Overload Multiplication (*)
Matrix Matrix::operator*(const Matrix& other) const {
    if (getCols() != other.getRows()) {
        throw std::invalid_argument("Number of columns in first matrix must match rows in second.");
    }

    Matrix result(getRows(), other.getCols(), 0);
    for (size_t i = 0; i < getRows(); ++i) {
        for (size_t j = 0; j < other.getCols(); ++j) {
            for (size_t k = 0; k < getCols(); ++k) {
                result.data[i][j] += data[i][k] * other.data[k][j];
            }
        }
    }
    return result;
}

// Overload Comparison (==)
bool Matrix::operator==(const Matrix& other) const {
    return data == other.data;
}

// Overload Output Stream (<<)
std::ostream& operator<<(std::ostream& os, const Matrix& matrix) {
    for (const auto& row : matrix.data) {
        for (int val : row) {
            os << val << " ";
        }
        os << "\n";
    }
    return os;
}
