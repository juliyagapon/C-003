#include "matrixMultiplication.h"
#include <stdexcept>

void multiplyMatrices(const std::vector<std::vector<int>> &mat1, const std::vector<std::vector<int>> &mat2, std::vector<std::vector<int>> &result)
{
    if (mat1.empty() || mat2.empty() || mat1[0].empty() || mat2[0].empty()) {
        throw std::invalid_argument("Matrices cannot be empty.");
    }

    int rows1 = mat1.size();
    int cols1 = mat1[0].size();
    int rows2 = mat2.size();
    int cols2 = mat2[0].size();

    if (cols1 != rows2) {
        throw std::invalid_argument("Matrix dimensions are incompatible for multiplication.");
    }

    result.assign(rows1, std::vector<int>(cols2, 0));

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
