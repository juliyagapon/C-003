#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

TEST_CASE("Savings Account: Withdraw with Sufficient Balance") {
    SavingsAccount sa("S123", "John Doe", 500.0, 100.0);
    sa.withdraw(300.0);
    CHECK(sa.getBalance() == 200.0);
}

TEST_CASE("Savings Account: Withdraw Below Minimum Balance") {
    SavingsAccount sa("S456", "Alice", 500.0, 200.0);
    sa.withdraw(400.0);
    CHECK(sa.getBalance() == 500.0);
}

TEST_CASE("Checking Account: Withdraw with Overdraft") {
    CheckingAccount ca("C123", "Bob", 100.0, 200.0, 20.0);
    ca.withdraw(250.0);
    CHECK(ca.getBalance() == -170.0);
}

TEST_CASE("Checking Account: Withdraw Beyond Overdraft Limit") {
    CheckingAccount ca("C789", "Charlie", 100.0, 200.0, 20.0);
    ca.withdraw(350.0);
    CHECK(ca.getBalance() == 100.0);
}