#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(std::string name, int age);
    virtual void printDetails() const;
    virtual ~Person() = default; // Virtual destructor

    // Getter functions
    std::string getName() const;
    int getAge() const;
};

#endif // PERSON_H
