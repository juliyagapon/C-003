5. Higher-Order Function for Custom Sorting
   Write a function void customSort(vector<int> &arr, bool (compare)(int, int)) that:
   - Takes a comparison function pointer compare to perform custom sorting.
   - Write two comparison functions: compareAsc for ascending order and compareDesc for descending order.
   - Sort the array in main() by passing compareAsc and compareDesc function pointers to customSort, and demonstrate sorting both ways.