#include "remove_duplicates.h"
#include <iostream>
#include <vector>

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

    
    int newLength = removeDuplicates(arr);

    std::cout << "Array after removing duplicates: ";
    printArray(arr, newLength);
    std::cout << "New length of the array: " << newLength << std::endl;

    return 0;
}
