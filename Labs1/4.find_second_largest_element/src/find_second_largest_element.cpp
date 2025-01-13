#include "find_second_largest_element.h"
#include <vector>
#include <limits>


int FindSecondLargestElement(const std::vector<int>& arr) {
    if (arr.size() < 2) {
        return NO_SECOND_LARGEST; // Not enough elements to find the second largest
    }

    int largest = std::numeric_limits<int>::min();
    int second_largest = std::numeric_limits<int>::min();

    for (int num : arr) {
        if (num > largest) {
            second_largest = largest;
            largest = num;
        } else if (num > second_largest && num < largest) {
            second_largest = num;
        }
    }

    // If second largest remains unchanged, there are not two distinct elements
    if (second_largest == std::numeric_limits<int>::min()) {
        return NO_SECOND_LARGEST;
    }

    return second_largest;
}
