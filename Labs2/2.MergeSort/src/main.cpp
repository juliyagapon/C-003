#include "mergeSort.h"
#include <iostream>

void printArray(const std::vector<int> &arr) {
    for (int num : arr)
        std::cout << num << " ";
    std::cout << "\n";
}

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

    std::cout << "Original array: ";
    printArray(arr);

    mergeSort(arr, 0, arr.size() - 1);

    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
