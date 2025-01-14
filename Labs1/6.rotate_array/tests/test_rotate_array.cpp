#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "rotate_array.h"
#include <vector>

TEST_CASE("Rotate Array") {
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    RotateArray(arr1, 2);
    CHECK(arr1 == std::vector<int>({4, 5, 1, 2, 3}));

    std::vector<int> arr2 = {1, 2, 3};
    RotateArray(arr2, 1);
    CHECK(arr2 == std::vector<int>({3, 1, 2}));

    std::vector<int> arr3 = {};
    RotateArray(arr3, 3);
    CHECK(arr3 == std::vector<int>({}));
}
