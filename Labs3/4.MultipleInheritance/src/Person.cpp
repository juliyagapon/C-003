#include "Person.h"

Person::Person(std::string name, int age) : name(name), age(age) {}

void Person::printDetails() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}

// Getter implementations
std::string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}
