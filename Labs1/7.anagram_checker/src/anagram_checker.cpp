#include "anagram_checker.h"
#include <algorithm>
#include <cctype>

bool AreAnagrams(const std::string& s1, const std::string& s2) {
    auto normalize = [](const std::string& str) {
        std::string result;
        for (char ch : str) {
            if (std::isalpha(ch)) {
                result.push_back(std::tolower(ch));
            }
        }
        std::sort(result.begin(), result.end());
        return result;
    };

    return normalize(s1) == normalize(s2);
}
