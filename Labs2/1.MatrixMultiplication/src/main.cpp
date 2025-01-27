#include "matrixMultiplication.h"
#include <iostream>
#include <iomanip>

void printMatrix(const std::vector<std::vector<int>> &matrix) {
    for (const auto &row : matrix) {
        for (const auto &val : row) {
            std::cout << std::setw(5) << val;
        }
        std::cout << "\n";
    }
}

int main() {
    try {
        std::cout << "Matrix Multiplication Program\n";

        // Input first matrix
        int rows1, cols1;
        std::cout << "Enter rows and columns for the first matrix: ";
        std::cin >> rows1 >> cols1;
        std::vector<std::vector<int>> mat1(rows1, std::vector<int>(cols1));

        std::cout << "Enter elements of the first matrix:\n";
        for (int i = 0; i < rows1; ++i) {
            for (int j = 0; j < cols1; ++j) {
                std::cin >> mat1[i][j];
            }
        }

        // Input second matrix
        int rows2, cols2;
        std::cout << "Enter rows and columns for the second matrix: ";
        std::cin >> rows2 >> cols2;
        std::vector<std::vector<int>> mat2(rows2, std::vector<int>(cols2));

        std::cout << "Enter elements of the second matrix:\n";
        for (int i = 0; i < rows2; ++i) {
            for (int j = 0; j < cols2; ++j) {
                std::cin >> mat2[i][j];
            }
        }

        // Perform matrix multiplication
        std::vector<std::vector<int>> result;
        multiplyMatrices(mat1, mat2, result);

        // Print result
        std::cout << "Resultant Matrix:\n";
        printMatrix(result);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}
