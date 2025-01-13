#include "palindrome.h"
#include <cctype>

bool isPalindrome(const std::string& input) {
    std::string filteredString;

    for (char ch : input) {
        if (std::isalnum(ch)) {
            filteredString += std::tolower(ch);
        }
    }

    int left = 0, right = filteredString.size() - 1;
    while (left < right) {
        if (filteredString[left] != filteredString[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}
