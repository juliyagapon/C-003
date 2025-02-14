#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0);

    // Rule of Five
    Complex(const Complex& other); // Copy constructor
    Complex& operator=(const Complex& other); // Copy assignment
    Complex(Complex&& other) noexcept; // Move constructor
    Complex& operator=(Complex&& other) noexcept; // Move assignment
    ~Complex(); // Destructor

    // Operator Overloading
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    bool operator==(const Complex& other) const; // **Added**

    // Friend function for output stream
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};

#endif // COMPLEX_H
