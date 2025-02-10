4. Generate All Subsets (Power Set) using Recursion and Lambda
   Write a recursive function void generateSubsets(vector<int> &set, vector<int> &current, int index, const function<void(const vector<int>&)> &callback) that:
   - Generates all possible subsets (power set) of a given set of integers.
   - Uses a lambda function as a callback to process each subset (e.g., print, store).
   - Demonstrates the use of the lambda to print each subset to the console as it's generated.