#include <iostream>
#include "string_compression.h"

int main() {
    std::string input;
    std::cout << "Enter a string to compress: ";
    std::cin >> input;

    std::string compressed = StringCompression(input);
    std::cout << "Compressed string: " << compressed << std::endl;

    return 0;
}