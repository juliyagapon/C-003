#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "ResourceHolder.h"

TEST_CASE("Testing Resource Allocation and Copy") {
    ResourceHolder rh1(3);
    CHECK_NOTHROW(rh1.print());

    ResourceHolder rh2 = rh1; // Copy constructor
    CHECK_NOTHROW(rh2.print());
}

TEST_CASE("Testing Move Constructor") {
    ResourceHolder rh1(3);
    ResourceHolder rh2 = std::move(rh1);
    CHECK_NOTHROW(rh2.print());
}

TEST_CASE("Testing Move Assignment Operator") {
    ResourceHolder rh1(3);
    ResourceHolder rh2(5);
    rh2 = std::move(rh1);
    CHECK_NOTHROW(rh2.print());
}

TEST_CASE("Testing Resource Release") {
    ResourceHolder rh(3);
    rh.release();
    CHECK_NOTHROW(rh.print());
}
