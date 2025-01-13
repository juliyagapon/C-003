#include "array_reversal.h"
#include <vector> 
#include <algorithm>

void ArrayReverse(std::vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        std::swap(arr[left], arr[right]);
        ++left;
        --right;
    }
}