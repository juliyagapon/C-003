#include "subarray_with_maximum_sum.h"
#include <algorithm>

std::pair<int, std::vector<int>> SubarrayWithMaxSum(const std::vector<int>& arr) {
    if (arr.empty()) return {0, {}};

    int max_sum = arr[0];
    int current_sum = arr[0];
    int start = 0, end = 0, temp_start = 0;

    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] > current_sum + arr[i]) {
            current_sum = arr[i];
            temp_start = i;
        } else {
            current_sum += arr[i];
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
            start = temp_start;
            end = i;
        }
    }

    std::vector<int> subarray(arr.begin() + start, arr.begin() + end + 1);
    return {max_sum, subarray};
}
