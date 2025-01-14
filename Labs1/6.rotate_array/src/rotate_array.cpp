#include "rotate_array.h"
#include <algorithm>

void RotateArray(std::vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return;

    k = k % n; // Handle cases where k >= n
    std::reverse(arr.begin(), arr.end());
    std::reverse(arr.begin(), arr.begin() + k);
    std::reverse(arr.begin() + k, arr.end());
}
