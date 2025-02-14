4. Multiple Inheritance

Create a class structure that demonstrates the diamond problem:

- Base class Person with a name and age.
- Two derived classes:
- Employee adds a job title and salary.
- Student adds a degree.
- A third class WorkingStudent inherits both Employee and Student.
- Use virtual inheritance to ensure only one copy of Person is created in WorkingStudent.
- Implement member functions to print details about a working student, including job and study details.
- Ensure that WorkingStudent can access all Person, Employee, and Student data without ambiguity using virtual inheritance.