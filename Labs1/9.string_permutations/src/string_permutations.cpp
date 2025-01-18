#include "string_permutations.h"
#include <algorithm>
#include <iostream>

// Helper function to generate permutations
void generatePermutations(const std::string &input, std::vector<std::string> &result) {
    std::string str = input;
    std::sort(str.begin(), str.end()); // Sort to handle duplicates efficiently
    do {
        result.push_back(str);
    } while (std::next_permutation(str.begin(), str.end()));
}

// Wrapper function to return unique permutations
std::vector<std::string> getUniquePermutations(const std::string &input) {
    std::vector<std::string> result;
    generatePermutations(input, result);
    return result;
}

// Function to print permutations
void printPermutations(const std::string &input) {
    auto permutations = getUniquePermutations(input);
    for (const auto &perm : permutations) {
        std::cout << perm << std::endl;
    }
}
