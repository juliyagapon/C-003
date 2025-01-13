#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "find_second_largest_element.h"

TEST_CASE("Find second largest element in an array") {
    SUBCASE("Normal case with distinct elements") {
        std::vector<int> arr = {10, 20, 30, 40, 50};
        CHECK(FindSecondLargestElement(arr) == 40);
    }

    SUBCASE("Case with duplicates but two distinct elements") {
        std::vector<int> arr = {10, 20, 20, 10};
        CHECK(FindSecondLargestElement(arr) == 10);
    }

    SUBCASE("Case with all elements the same") {
        std::vector<int> arr = {5, 5, 5, 5};
        CHECK(FindSecondLargestElement(arr) == NO_SECOND_LARGEST);
    }

    SUBCASE("Case with fewer than two elements") {
        std::vector<int> arr1 = {5};
        CHECK(FindSecondLargestElement(arr1) == NO_SECOND_LARGEST);

        std::vector<int> arr2 = {};
        CHECK(FindSecondLargestElement(arr2) == NO_SECOND_LARGEST);
    }

    SUBCASE("Case with negative numbers and distinct elements") {
        std::vector<int> arr = {-10, -20, -30, -40};
        CHECK(FindSecondLargestElement(arr) == -20);
    }

    SUBCASE("Case with mixed positive and negative numbers") {
        std::vector<int> arr = {-10, 20, 15, -5, 20};
        CHECK(FindSecondLargestElement(arr) == 15);
    }
}
