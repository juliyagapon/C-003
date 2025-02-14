#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Complex.h"

TEST_CASE("Testing Complex Number Addition") {
    Complex c1(3, 4);
    Complex c2(1, 2);
    Complex result = c1 + c2;
    
    CHECK(result == Complex(4, 6));
}

TEST_CASE("Testing Complex Number Subtraction") {
    Complex c1(5, 7);
    Complex c2(2, 3);
    Complex result = c1 - c2;
    
    CHECK(result == Complex(3, 4));
}

TEST_CASE("Testing Complex Number Multiplication") {
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex result = c1 * c2;
    
    CHECK(result == Complex(-5, 10));
}
