#include <iostream>
#include "array_reversal.h"

int main() {
    int n;

    // Input the number of elements
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    // Create the array
    std::vector<int> arr(n);
    std::cout << "Enter " << n << " integers:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Reverse the array
    ArrayReverse(arr);

    // Output the reversed array
    std::cout << "Reversed array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
