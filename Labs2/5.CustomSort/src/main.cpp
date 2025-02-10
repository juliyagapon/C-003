#include "customSort.h"
#include <iostream>


int main() {
    int n;

    // Input the number of elements
    std::cout << "Enter the number of elements in the arrays: ";
    std::cin >> n;

    // Create the first array
    std::vector<int> set(n);
    std::cout << "Enter " << n << " integers for array 1:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> set[i];
    }

    vector<int> current;
    
    auto printSubset = [](const vector<int>& subset) {
        std::cout << "{ ";
        for (int num : subset) {
            std::cout << num << " ";
        }
        std::cout << "}\n";
    };
    
    generateSubsets(set, current, 0, printSubset);
    return 0;
}