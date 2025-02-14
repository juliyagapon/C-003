#include "WorkingStudent.h"
#include <iostream>

int main() {
    WorkingStudent ws("John Doe", 25, "Software Engineer", 60000, "Computer Science");
    
    std::cout << "Working Student Details:\n";
    ws.printDetails();

    return 0;
}
