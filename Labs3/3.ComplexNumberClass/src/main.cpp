#include "Complex.h"
#include <iostream>

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    std::cout << "c1: " << c1 << "\n";
    std::cout << "c2: " << c2 << "\n";

    Complex sum = c1 + c2;
    std::cout << "Sum: " << sum << "\n";

    Complex diff = c1 - c2;
    std::cout << "Difference: " << diff << "\n";

    Complex product = c1 * c2;
    std::cout << "Product: " << product << "\n";

    Complex c3 = c1;
    std::cout << "Copy Constructor (c3 = c1): " << c3 << "\n";

    Complex c4 = std::move(c2);
    std::cout << "Move Constructor (c4 = std::move(c2)): " << c4 << "\n";

    return 0;
}
