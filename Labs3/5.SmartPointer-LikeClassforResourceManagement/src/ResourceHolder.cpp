#include "ResourceHolder.h"
#include <iostream>
#include <algorithm> // For std::copy

// Constructor: Allocate dynamic array
ResourceHolder::ResourceHolder(size_t size) : size(size) {
    resource = new int[size];
    for (size_t i = 0; i < size; ++i) {
        resource[i] = static_cast<int>(i * 10); // Initialize array elements
    }
    std::cout << "Resource allocated of size " << size << std::endl;
}

// Copy Constructor (Deep Copy)
ResourceHolder::ResourceHolder(const ResourceHolder& other) : size(other.size) {
    resource = new int[size];
    std::copy(other.resource, other.resource + size, resource);
    std::cout << "Copy Constructor: Resource copied\n";
}

// Copy Assignment Operator (Deep Copy)
ResourceHolder& ResourceHolder::operator=(const ResourceHolder& other) {
    if (this == &other) return *this; // Self-assignment check

    // Free existing resource
    delete[] resource;

    // Allocate new resource and copy
    size = other.size;
    resource = new int[size];
    std::copy(other.resource, other.resource + size, resource);

    std::cout << "Copy Assignment Operator: Resource copied\n";
    return *this;
}

// Move Constructor (Transfer Ownership)
ResourceHolder::ResourceHolder(ResourceHolder&& other) noexcept : resource(nullptr), size(0) {
    // Transfer ownership
    resource = other.resource;
    size = other.size;

    // Reset source object
    other.resource = nullptr;
    other.size = 0;

    std::cout << "Move Constructor: Resource moved\n";
}

// Move Assignment Operator (Transfer Ownership)
ResourceHolder& ResourceHolder::operator=(ResourceHolder&& other) noexcept {
    if (this == &other) return *this; // Self-assignment check

    // Free existing resource
    delete[] resource;

    // Transfer ownership
    resource = other.resource;
    size = other.size;

    // Reset source object
    other.resource = nullptr;
    other.size = 0;

    std::cout << "Move Assignment Operator: Resource moved\n";
    return *this;
}

// Destructor (Free resource)
ResourceHolder::~ResourceHolder() {
    delete[] resource;
    std::cout << "Destructor: Resource freed\n";
}

// Overload Dereference Operator (*)
int& ResourceHolder::operator*() const {
    if (!resource) throw std::runtime_error("Attempt to dereference a null resource");
    return *resource;
}

// Overload Arrow Operator (->)
int* ResourceHolder::operator->() const {
    return resource;
}

// Function to release resource explicitly
void ResourceHolder::release() {
    delete[] resource;
    resource = nullptr;
    size = 0;
    std::cout << "Resource explicitly released\n";
}

// Function to display contents
void ResourceHolder::print() const {
    if (!resource) {
        std::cout << "No resource to display\n";
        return;
    }
    std::cout << "Resource contents: ";
    for (size_t i = 0; i < size; ++i) {
        std::cout << resource[i] << " ";
    }
    std::cout << std::endl;
}
