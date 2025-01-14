#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "longest_common_prefix.h"

TEST_CASE("Longest Common Prefix") {
    CHECK(LongestCommonPrefix({"flower", "flow", "flight"}) == "fl");
    CHECK(LongestCommonPrefix({"dog", "racecar", "car"}) == "");
    CHECK(LongestCommonPrefix({"interspecies", "interstellar", "interstate"}) == "inters");
    CHECK(LongestCommonPrefix({"", "prefix"}) == "");
    CHECK(LongestCommonPrefix({"prefix"}) == "prefix");
    CHECK(LongestCommonPrefix({"same", "same", "same"}) == "same");
    CHECK(LongestCommonPrefix({}) == "");
}
