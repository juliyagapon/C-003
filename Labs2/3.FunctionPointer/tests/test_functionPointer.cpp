#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "functionPointer.h"

TEST_CASE("Test add operation") {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int result[3];
    int expected[] = {5, 7, 9};

    applyOperation(arr1, arr2, result, 3, add);

    for (int i = 0; i < 3; ++i) {
        CHECK(result[i] == expected[i]);
    }
}

TEST_CASE("Test subtract operation") {
    int arr1[] = {5, 6, 7};
    int arr2[] = {1, 2, 3};
    int result[3];
    int expected[] = {4, 4, 4};

    applyOperation(arr1, arr2, result, 3, subtract);

    for (int i = 0; i < 3; ++i) {
        CHECK(result[i] == expected[i]);
    }
}

TEST_CASE("Test multiply operation") {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int result[3];
    int expected[] = {4, 10, 18};

    applyOperation(arr1, arr2, result, 3, multiply);

    for (int i = 0; i < 3; ++i) {
        CHECK(result[i] == expected[i]);
    }
}

TEST_CASE("Test with zero elements") {
    int arr1[] = {};
    int arr2[] = {};
    int result[0];
    applyOperation(arr1, arr2, result, 0, add);

    CHECK(true); // No exception should occur
}
