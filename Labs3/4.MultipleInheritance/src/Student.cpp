#include "Student.h"

Student::Student(std::string name, int age, std::string degree)
    : Person(name, age), degree(degree) {}

void Student::printDetails() const {
    Person::printDetails();
    std::cout << "Degree: " << degree << std::endl;
}

// Getter implementation
std::string Student::getDegree() const {
    return degree;
}
