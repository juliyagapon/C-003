#include "longest_common_prefix.h"

std::string LongestCommonPrefix(const std::vector<std::string>& strs) {
    if (strs.empty()) return "";

    // Initialize prefix to the first string
    std::string prefix = strs[0];

    // Compare prefix with all strings
    for (const auto& str : strs) {
        size_t i = 0;
        while (i < prefix.size() && i < str.size() && prefix[i] == str[i]) {
            ++i;
        }
        prefix = prefix.substr(0, i); // Update the prefix
        if (prefix.empty()) break;   // If prefix becomes empty, stop
    }

    return prefix;
}
