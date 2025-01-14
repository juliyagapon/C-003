#include "longest_common_prefix.h"
#include <iostream>
#include <vector>
#include <string>

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input! Number of strings must be positive." << std::endl;
        return 1;
    }

    std::vector<std::string> arr(n);
    std::cout << "Enter the strings:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::string result = LongestCommonPrefix(arr);

    if (result.empty()) {
        std::cout << "No common prefix found." << std::endl;
    } else {
        std::cout << "Longest common prefix: " << result << std::endl;
    }

    return 0;
}
