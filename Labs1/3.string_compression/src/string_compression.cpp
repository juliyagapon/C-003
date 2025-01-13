#include "string_compression.h"
#include <string>
#include <sstream>

std::string StringCompression(const std::string& input) {
    if (input.empty()) return "";

    std::stringstream compressed;
    int count = 1;
    for (size_t i = 1; i < input.size(); ++i) {
        if (input[i] == input[i - 1]) {
            count++;
        } else {
            // Only append the count if it is greater than 1
            compressed << input[i - 1];
            if (count > 1) {
                compressed << count;
            }
            count = 1;
        }
    }

    // Append the last character and its count if > 1
    compressed << input.back();
    if (count > 1) {
        compressed << count;
    }

    return compressed.str();
}
