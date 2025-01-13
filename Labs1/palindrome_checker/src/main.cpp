#include <iostream>
#include "palindrome.h"

int main() {
    std::string input;
    std::cout << "Enter a string to check if it's a palindrome: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "\"" << input << "\" is a palindrome!" << std::endl;
    } else {
        std::cout << "\"" << input << "\" is not a palindrome." << std::endl;
    }

    return 0;
}
