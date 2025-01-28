3. Function Pointer for Custom Operations on Arrays
   Write a program that:
   - Defines three functions add, multiply, and subtract that operate on two integers.
   - Uses a function pointer to apply a selected operation (e.g., addition, multiplication, subtraction) to every element of two arrays of integers.
   - Create a function void applyOperation(int arr1[], int arr2[], int result[], int n, int (op)(int, int)) that takes the two arrays, a result array, the number of elements, and a function pointer op to apply the selected operation to corresponding elements in the arrays.