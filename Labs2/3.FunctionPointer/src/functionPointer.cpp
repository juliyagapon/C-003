#include "functionPointer.h"

// Add two integers
int add(int a, int b) {
    return a + b;
}

// Subtract one integer from another
int subtract(int a, int b) {
    return a - b;
}

// Multiply two integers
int multiply(int a, int b) {
    return a * b;
}

// Apply the selected operation on corresponding elements of two arrays
void applyOperation(int arr1[], int arr2[], int result[], int n, int (*op)(int, int)) {
    for (int i = 0; i < n; ++i) {
        result[i] = op(arr1[i], arr2[i]);
    }
}
