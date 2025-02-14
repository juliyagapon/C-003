#include "matrixClass.h"
#include <iostream>

int main() {
    try {
        Matrix mat1({{1, 2, 3}, {4, 5, 6}});
        Matrix mat2({{7, 8, 9}, {10, 11, 12}});
        Matrix sum = mat1 + mat2;

        std::cout << "Matrix Addition:\n" << sum << std::endl;

        Matrix mat3({{1, 2}, {3, 4}});
        Matrix mat4({{2, 0}, {1, 2}});
        Matrix product = mat3 * mat4;

        std::cout << "Matrix Multiplication:\n" << product << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
