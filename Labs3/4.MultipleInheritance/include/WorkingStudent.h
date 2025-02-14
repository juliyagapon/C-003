#ifndef WORKINGSTUDENT_H
#define WORKINGSTUDENT_H

#include "Employee.h"
#include "Student.h"

class WorkingStudent : public Employee, public Student {
public:
    WorkingStudent(std::string name, int age, std::string jobTitle, double salary, std::string degree);
    void printDetails() const override;
};

#endif // WORKINGSTUDENT_H
