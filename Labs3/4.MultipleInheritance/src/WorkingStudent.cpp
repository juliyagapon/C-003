#include "WorkingStudent.h"

WorkingStudent::WorkingStudent(std::string name, int age, std::string jobTitle, double salary, std::string degree)
    : Person(name, age), Employee(name, age, jobTitle, salary), Student(name, age, degree) {}

void WorkingStudent::printDetails() const {
    Person::printDetails();  // Ensures no ambiguity
    std::cout << "Job Title: " << jobTitle << ", Salary: $" << salary << std::endl;
    std::cout << "Degree: " << degree << std::endl;
}
