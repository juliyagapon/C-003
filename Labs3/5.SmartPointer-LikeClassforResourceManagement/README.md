5. Smart Pointer-Like Class for Resource Management

Create a custom class ResourceHolder that manages a resource, such as dynamic memory or a file handle:

- Implement copy and move semantics:
- A copy constructor that performs a deep copy of the resource.
- A move constructor that transfers ownership of the resource, setting the original resource to nullptr.
- Implement the copy assignment operator and move assignment operator.
- Overload the dereference operator () and arrow operator (->) to access the resource.
- Add a function to release the resource explicitly (optional).
- Ensure proper resource cleanup in the destructor.
- Manage an array of resources (e.g., dynamically allocated integers) using a custom smart pointer-like class and provide copy/move control for handling ownership efficiently.