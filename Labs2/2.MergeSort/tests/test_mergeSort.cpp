#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "mergeSort.h"

TEST_CASE("Merge Sort: Basic functionality") {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};
    std::vector<int> expected = {5, 6, 7, 11, 12, 13};

    mergeSort(arr, 0, arr.size() - 1);

    CHECK(arr == expected);
}

TEST_CASE("Merge Sort: Already sorted array") {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::vector<int> expected = {1, 2, 3, 4, 5};

    mergeSort(arr, 0, arr.size() - 1);

    CHECK(arr == expected);
}

TEST_CASE("Merge Sort: Reverse sorted array") {
    std::vector<int> arr = {5, 4, 3, 2, 1};
    std::vector<int> expected = {1, 2, 3, 4, 5};

    mergeSort(arr, 0, arr.size() - 1);

    CHECK(arr == expected);
}

TEST_CASE("Merge Sort: Array with duplicates") {
    std::vector<int> arr = {4, 2, 2, 8, 5, 5};
    std::vector<int> expected = {2, 2, 4, 5, 5, 8};

    mergeSort(arr, 0, arr.size() - 1);

    CHECK(arr == expected);
}

TEST_CASE("Merge Sort: Single element array") {
    std::vector<int> arr = {42};
    std::vector<int> expected = {42};

    mergeSort(arr, 0, arr.size() - 1);

    CHECK(arr == expected);
}

TEST_CASE("Merge Sort: Empty array") {
    std::vector<int> arr = {};
    std::vector<int> expected = {};

    mergeSort(arr, 0, arr.size() - 1);

    CHECK(arr == expected);
}
