#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "array_reversal.h"
#include <vector>

TEST_CASE("Array reversal") {
    // Test case 1
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    ArrayReverse(arr1);  // Use ArrayReverse (not reverseArray)
    CHECK(arr1 == std::vector<int>({5, 4, 3, 2, 1}));

    // Test case 2
    std::vector<int> arr2 = {10, 20, 30, 40};
    ArrayReverse(arr2);  // Use ArrayReverse (not reverseArray)
    CHECK(arr2 == std::vector<int>({40, 30, 20, 10}));

    // Test case 3
    std::vector<int> arr3 = {1, 2, 3};
    ArrayReverse(arr3);  // Use ArrayReverse (not reverseArray)
    CHECK(arr3 == std::vector<int>({3, 2, 1}));

    // Test case 4
    std::vector<int> arr4 = {7, 8, 9};
    ArrayReverse(arr4);  // Use ArrayReverse (not reverseArray)
    CHECK(arr4 == std::vector<int>({9, 8, 7}));
}
