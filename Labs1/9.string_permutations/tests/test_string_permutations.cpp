#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "string_permutations.h"

TEST_CASE("Unique Permutations Generation") {
    SUBCASE("Unique characters") {
        std::vector<std::string> result = getUniquePermutations("abc");
        std::vector<std::string> expected = {"abc", "acb", "bac", "bca", "cab", "cba"};
        CHECK(result == expected);
    }

    SUBCASE("Duplicate characters") {
        std::vector<std::string> result = getUniquePermutations("aabc");
        std::vector<std::string> expected = {"aabc", "aacb", "abac", "abca", "acab", "acba",
                                             "baac", "baca", "bcaa", "caab", "caba", "cbaa"};
        CHECK(result == expected);
    }

    SUBCASE("Single character") {
        std::vector<std::string> result = getUniquePermutations("a");
        std::vector<std::string> expected = {"a"};
        CHECK(result == expected);
    }

    SUBCASE("Empty string") {
        std::vector<std::string> result = getUniquePermutations("");
        std::vector<std::string> expected = {""};
        CHECK(result == expected);
    }
}
