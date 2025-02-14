1. Matrix Class
   Create a Matrix class that:
   - Supports dynamic 2D matrices (use vector<vector<int>> internally).
   - Overloads the following operators:
     1. Addition (+): Adds two matrices of the same dimension.
     2. Multiplication (*): Multiplies two matrices if their dimensions are compatible.
     3. Comparison (==): Compares two matrices for equality (element-wise).
   - Throw an exception if matrix dimensions are incompatible for addition or multiplication.
   - Add a friend function to overload the << operator to print the matrix.
   - Ensure matrix operations are optimized for large matrices, avoiding unnecessary deep copies.