#include "Complex.h"
#include <iostream>
#include <cmath>

// Constructor
Complex::Complex(double r, double i) : real(r), imag(i) {}

// Copy Constructor
Complex::Complex(const Complex& other) : real(other.real), imag(other.imag) {
    std::cout << "Copy Constructor called\n";
}

// Copy Assignment Operator
Complex& Complex::operator=(const Complex& other) {
    if (this != &other) {
        real = other.real;
        imag = other.imag;
        std::cout << "Copy Assignment Operator called\n";
    }
    return *this;
}

// Move Constructor
Complex::Complex(Complex&& other) noexcept : real(other.real), imag(other.imag) {
    other.real = 0.0;
    other.imag = 0.0;
    std::cout << "Move Constructor called\n";
}

// Move Assignment Operator
Complex& Complex::operator=(Complex&& other) noexcept {
    if (this != &other) {
        real = other.real;
        imag = other.imag;
        other.real = 0.0;
        other.imag = 0.0;
        std::cout << "Move Assignment Operator called\n";
    }
    return *this;
}

// Destructor
Complex::~Complex() {
    std::cout << "Destructor called\n";
}

// Overload Addition
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

// Overload Subtraction
Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

// Overload Multiplication
Complex Complex::operator*(const Complex& other) const {
    return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
}

// Overload Equality (==)
bool Complex::operator==(const Complex& other) const {
    return (std::abs(real - other.real) < 1e-9) && (std::abs(imag - other.imag) < 1e-9);
}

// Overload Output Stream
std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.real << " + " << c.imag << "i";
    return os;
}
