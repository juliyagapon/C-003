#include <iostream>
#include "rotate_array.h"

int main() {
    int n;
    int k;

    // Input the number of elements
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    // Create the array
    std::vector<int> arr(n);
    std::cout << "Enter " << n << " integers:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Input the number of elements
    std::cout << "Enter the number of rotates the array: ";
    std::cin >> k;

    // Reverse the array
    RotateArray(arr, k);

    // Output the reversed array
    std::cout << "Rotated array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
