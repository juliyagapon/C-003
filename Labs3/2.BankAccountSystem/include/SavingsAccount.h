#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
private:
    double minBalance;

public:
    SavingsAccount(std::string accNum, std::string owner, double bal, double minBal);
    void withdraw(double amount) override;
};

#endif // SAVINGSACCOUNT_H
