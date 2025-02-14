#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "matrixClass.h"
#include <iostream>

TEST_CASE("Matrix Addition") {
    Matrix mat1({{1, 2, 3}, {4, 5, 6}});
    Matrix mat2({{7, 8, 9}, {10, 11, 12}});
    Matrix result = mat1 + mat2;
    
    Matrix expected({{8, 10, 12}, {14, 16, 18}});
    CHECK(result == expected);
}

TEST_CASE("Matrix Multiplication") {
    Matrix mat1({{1, 2}, {3, 4}});
    Matrix mat2({{2, 0}, {1, 2}});
    Matrix result = mat1 * mat2;
    
    Matrix expected({{4, 4}, {10, 8}});
    CHECK(result == expected);
}

TEST_CASE("Matrix Dimension Mismatch Addition") {
    Matrix mat1({{1, 2, 3}});
    Matrix mat2({{1, 2}, {3, 4}});
    
    CHECK_THROWS_AS(mat1 + mat2, std::invalid_argument);
}

TEST_CASE("Matrix Dimension Mismatch Multiplication") {
    Matrix mat1({{1, 2, 3}});
    Matrix mat2({{1, 2}});
    
    CHECK_THROWS_AS(mat1 * mat2, std::invalid_argument);
}

