#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account {
private:
    double overdraftFee;
    double overdraftLimit;

public:
    CheckingAccount(std::string accNum, std::string owner, double bal, double overdraftLim, double fee);
    void withdraw(double amount) override;
};

#endif // CHECKINGACCOUNT_H
