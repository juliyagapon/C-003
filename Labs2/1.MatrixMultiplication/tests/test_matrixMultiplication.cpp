#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "matrixMultiplication.h"


TEST_CASE("Matrix multiplication: Valid cases") {
    std::vector<std::vector<int>> mat1 = {{1, 2, 3}, {4, 5, 6}};
    std::vector<std::vector<int>> mat2 = {{7, 8}, {9, 10}, {11, 12}};
    std::vector<std::vector<int>> result;

    multiplyMatrices(mat1, mat2, result);

    std::vector<std::vector<int>> expected = {{58, 64}, {139, 154}};
    CHECK(result == expected);
}

TEST_CASE("Matrix multiplication: Incompatible dimensions") {
    std::vector<std::vector<int>> mat1 = {{1, 2}, {3, 4}};
    std::vector<std::vector<int>> mat2 = {{5, 6, 7}};

    std::vector<std::vector<int>> result;

    CHECK_THROWS_AS(multiplyMatrices(mat1, mat2, result), std::invalid_argument);
}

TEST_CASE("Matrix multiplication: Empty matrices") {
    std::vector<std::vector<int>> mat1 = {};
    std::vector<std::vector<int>> mat2 = {{1, 2}, {3, 4}};
    std::vector<std::vector<int>> result;

    CHECK_THROWS_AS(multiplyMatrices(mat1, mat2, result), std::invalid_argument);
}
