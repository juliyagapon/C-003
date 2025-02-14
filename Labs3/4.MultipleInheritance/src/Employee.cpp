#include "Employee.h"

Employee::Employee(std::string name, int age, std::string jobTitle, double salary)
    : Person(name, age), jobTitle(jobTitle), salary(salary) {}

void Employee::printDetails() const {
    Person::printDetails();
    std::cout << "Job Title: " << jobTitle << ", Salary: $" << salary << std::endl;
}

// Getter implementations
std::string Employee::getJobTitle() const {
    return jobTitle;
}

double Employee::getSalary() const {
    return salary;
}
