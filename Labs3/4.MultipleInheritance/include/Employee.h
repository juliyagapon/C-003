#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

class Employee : virtual public Person {
protected:
    std::string jobTitle;
    double salary;

public:
    Employee(std::string name, int age, std::string jobTitle, double salary);
    void printDetails() const override;

    // Getter functions
    std::string getJobTitle() const;
    double getSalary() const;
};

#endif // EMPLOYEE_H
