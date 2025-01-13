#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "palindrome.h"

TEST_CASE("Testing isPalindrome function") {
    CHECK(isPalindrome("A man, a plan, a canal: Panama") == true);
    CHECK(isPalindrome("racecar") == true);
    CHECK(isPalindrome("hello") == false);
    CHECK(isPalindrome("Was it a car or a cat I saw") == true);
    CHECK(isPalindrome("No lemon, no melon") == true);
    CHECK(isPalindrome("12321") == true);
    CHECK(isPalindrome("123456") == false);
    CHECK(isPalindrome("") == true);
    CHECK(isPalindrome("a") == true);
    CHECK(isPalindrome("Able was I, I saw Elba") == true);
}
