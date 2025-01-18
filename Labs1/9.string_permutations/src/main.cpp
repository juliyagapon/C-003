#include "string_permutations.h"
#include <iostream>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    std::cout << "Permutations:" << std::endl;
    printPermutations(input);
    return 0;
}
