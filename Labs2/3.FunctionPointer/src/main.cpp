#include "functionPointer.h"
#include <iostream>
#include <vector>

void printArray(const int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int n;

    // Input the number of elements
    std::cout << "Enter the number of elements in the arrays: ";
    std::cin >> n;

    // Create the first array
    std::vector<int> arr1(n);
    std::cout << "Enter " << n << " integers for array 1:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr1[i];
    }

    // Create the second array
    std::vector<int> arr2(n);
    std::cout << "Enter " << n << " integers for array 2:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr2[i];
    }

    // Create the result array
    std::vector<int> result(n);

    // Perform addition
    std::cout << "Addition:\n";
    applyOperation(arr1.data(), arr2.data(), result.data(), n, add);
    printArray(result.data(), n);

    // Perform subtraction
    std::cout << "Subtraction:\n";
    applyOperation(arr1.data(), arr2.data(), result.data(), n, subtract);
    printArray(result.data(), n);

    // Perform multiplication
    std::cout << "Multiplication:\n";
    applyOperation(arr1.data(), arr2.data(), result.data(), n, multiply);
    printArray(result.data(), n);

    return 0;
}
