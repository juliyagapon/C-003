#include "ResourceHolder.h"
#include <iostream>

int main() {
    ResourceHolder rh1(5);
    rh1.print();

    std::cout << "Creating a copy (deep copy)\n";
    ResourceHolder rh2 = rh1;
    rh2.print();

    std::cout << "Moving ownership\n";
    ResourceHolder rh3 = std::move(rh1);
    rh3.print();

    std::cout << "Explicitly releasing resource\n";
    rh3.release();
    rh3.print();

    return 0;
}
