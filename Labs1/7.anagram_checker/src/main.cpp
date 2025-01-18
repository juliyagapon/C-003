#include <iostream>
#include "anagram_checker.h"
#include <string>

int main() {
    std::cout << "Enter string1: ";
    std::string string1;
    std::cin >> string1;

    std::cout << "Enter string2: ";
    std::string string2;
    std::cin >> string2;

    if (AreAnagrams(string1, string2)) {
        std::cout << "The stings are anagram" << std::endl;
    } else {
        std::cout << "The stings are not anagram" << std::endl;
    }

    return 0;
}
