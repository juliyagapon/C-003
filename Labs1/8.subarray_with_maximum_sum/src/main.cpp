#include "subarray_with_maximum_sum.h"
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input! Number of elements must be positive." << std::endl;
        return 1;
    }

    std::vector<int> arr(n);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    auto result = SubarrayWithMaxSum(arr);
    std::cout << "The maximum sum of the subarray is: " << result.first << std::endl;
    std::cout << "The subarray with the maximum sum is: [";
    for (size_t i = 0; i < result.second.size(); ++i) {
        std::cout << result.second[i];
        if (i < result.second.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
