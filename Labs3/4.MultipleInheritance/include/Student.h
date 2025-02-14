#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : virtual public Person {
protected:
    std::string degree;

public:
    Student(std::string name, int age, std::string degree);
    void printDetails() const override;

    // Getter function
    std::string getDegree() const;
};

#endif // STUDENT_H
