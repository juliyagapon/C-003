#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "string_compression.h"
#include <string>

TEST_CASE("String compression") {
    // Test case 1: Normal case
    std::string input1 = "aaabbcc";
    std::string compressed1 = StringCompression(input1);
    CHECK(compressed1 == "a3b2c2");

    // Test case 2: Empty string
    std::string input2 = "";
    std::string compressed2 = StringCompression(input2);
    CHECK(compressed2 == "");

    // Test case 3: String with no repeated characters
    std::string input3 = "abcd";
    std::string compressed3 = StringCompression(input3);
    CHECK(compressed3 == "abcd");

    // Test case 4: String with all the same character
    std::string input4 = "aaaaaa";
    std::string compressed4 = StringCompression(input4);
    CHECK(compressed4 == "a6");

    // Test case 5: Mixed characters with different repetition counts
    std::string input5 = "aabbbcccc";
    std::string compressed5 = StringCompression(input5);
    CHECK(compressed5 == "a2b3c4");

    // Test case 6: Mixed characters with different repetition counts
    std::string input6 = "aaabbcc";
    std::string compressed6 = StringCompression(input6);
    CHECK(compressed6 == "a3b2c2");
}
