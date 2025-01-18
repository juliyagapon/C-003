#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "remove_duplicates.h"

TEST_CASE("Remove duplicates from sorted array") {
    SUBCASE("Array with no duplicates") {
        std::vector<int> nums = {1, 2, 3, 4, 5};
        int length = removeDuplicates(nums);
        CHECK(length == 5);
        CHECK(std::vector<int>(nums.begin(), nums.begin() + length) == std::vector<int>{1, 2, 3, 4, 5});
    }

    SUBCASE("Array with duplicates") {
        std::vector<int> nums = {1, 1, 2, 2, 3, 4, 4};
        int length = removeDuplicates(nums);
        CHECK(length == 4);
        CHECK(std::vector<int>(nums.begin(), nums.begin() + length) == std::vector<int>{1, 2, 3, 4});
    }

    SUBCASE("Empty array") {
        std::vector<int> nums = {};
        int length = removeDuplicates(nums);
        CHECK(length == 0);
        CHECK(nums.empty());
    }

    SUBCASE("Array with all elements the same") {
        std::vector<int> nums = {7, 7, 7, 7};
        int length = removeDuplicates(nums);
        CHECK(length == 1);
        CHECK(std::vector<int>(nums.begin(), nums.begin() + length) == std::vector<int>{7});
    }
}
