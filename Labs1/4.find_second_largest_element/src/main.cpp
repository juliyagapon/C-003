#include "find_second_largest_element.h"
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

    int result = FindSecondLargestElement(arr);

    if (result == NO_SECOND_LARGEST) {
        std::cout << "No second largest element exists." << std::endl;
    } else {
        std::cout << "The second largest element is: " << result << std::endl;
    }

    return 0;
}
