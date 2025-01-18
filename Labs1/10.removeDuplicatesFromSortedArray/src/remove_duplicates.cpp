#include "remove_duplicates.h"
#include <iostream>

// Function to remove duplicates from a sorted array
int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int writeIndex = 1; // Pointer for the next unique element

    for (size_t readIndex = 1; readIndex < nums.size(); ++readIndex) {
        if (nums[readIndex] != nums[readIndex - 1]) {
            nums[writeIndex] = nums[readIndex];
            ++writeIndex;
        }
    }

    return writeIndex;
}

// Helper function to print the array
void printArray(const std::vector<int>& nums, int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}
