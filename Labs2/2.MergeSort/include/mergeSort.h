#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

// Merge two halves of the array
void merge(std::vector<int> &arr, int left, int mid, int right);

// Recursive Merge Sort function
void mergeSort(std::vector<int> &arr, int left, int right);


#endif // MERGESORT_H