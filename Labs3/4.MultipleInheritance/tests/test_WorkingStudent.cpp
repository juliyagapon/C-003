#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "WorkingStudent.h"

TEST_CASE("Working Student Initialization") {
    WorkingStudent ws("Alice", 23, "Data Analyst", 50000, "Data Science");

    CHECK(ws.getName() == "Alice");
    CHECK(ws.getAge() == 23);
    CHECK(ws.getJobTitle() == "Data Analyst");
    CHECK(ws.getSalary() == 50000);
    CHECK(ws.getDegree() == "Data Science");
}
