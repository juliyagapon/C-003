#include "powerSet.h"

void generateSubsets(vector<int> &set, vector<int> &current, int index, const function<void(const vector<int>&)> &callback) {
    if (index == set.size()) {
        callback(current);
        return;
    }
    
    // Exclude the current element and recurse
    generateSubsets(set, current, index + 1, callback);
    
    // Include the current element and recurse
    current.push_back(set[index]);
    generateSubsets(set, current, index + 1, callback);
    current.pop_back(); // Backtrack
}