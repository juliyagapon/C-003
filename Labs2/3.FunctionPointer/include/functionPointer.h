#ifndef FUNCTIONPOINTER_H
#define FUNCTIONPOINTER_H

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

// Function to apply a custom operation on arrays
void applyOperation(int arr1[], int arr2[], int result[], int n, int (*op)(int, int));

#endif // FUNCTIONPOINTER_H
