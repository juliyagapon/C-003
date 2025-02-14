#ifndef RESOURCEHOLDER_H
#define RESOURCEHOLDER_H

#include <iostream>
#include <memory>

class ResourceHolder {
private:
    int* resource; // Pointer to dynamically allocated array
    size_t size;   // Size of the allocated array

public:
    // Constructor
    explicit ResourceHolder(size_t size);

    // Copy Constructor (Deep Copy)
    ResourceHolder(const ResourceHolder& other);

    // Copy Assignment Operator
    ResourceHolder& operator=(const ResourceHolder& other);

    // Move Constructor (Transfer Ownership)
    ResourceHolder(ResourceHolder&& other) noexcept;

    // Move Assignment Operator
    ResourceHolder& operator=(ResourceHolder&& other) noexcept;

    // Destructor
    ~ResourceHolder();

    // Overload Dereference Operator (*)
    int& operator*() const;

    // Overload Arrow Operator (->)
    int* operator->() const;

    // Function to release resource explicitly
    void release();

    // Function to display contents
    void print() const;
};

#endif // RESOURCEHOLDER_H
