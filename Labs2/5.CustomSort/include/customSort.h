#ifndef CUSTOMSORT_H
#define CUSTOMSORT_H

#include <vector>
#include <functional>

using namespace std;

void generateSubsets(vector<int> &set, vector<int> &current, int index, const function<void(const vector<int>&)> &callback);

#endif // CUSTOMSORT_H