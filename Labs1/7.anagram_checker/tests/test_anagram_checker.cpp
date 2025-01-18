#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "anagram_checker.h"

TEST_CASE("Anagram Checker") {
    CHECK(AreAnagrams("listen", "silent"));
    CHECK(AreAnagrams("Triangle", "Integral"));
    CHECK(!AreAnagrams("apple", "pale"));
}
