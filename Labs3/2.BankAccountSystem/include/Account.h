#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
#include <vector>

class Account {
protected:
    std::string accountNumber;
    double balance;
    std::string ownerName;
    std::vector<std::string> transactionHistory;

public:
    Account(std::string accNum, std::string owner, double bal);
    virtual ~Account() {}

    virtual void deposit(double amount);
    virtual void withdraw(double amount) = 0;

    void logTransaction(const std::string& transaction);
    void printTransactionHistory() const;

    double getBalance() const;
    std::string getAccountNumber() const;
    std::string getOwnerName() const;

    friend std::ostream& operator<<(std::ostream& os, const Account& account);
};

#endif // ACCOUNT_H
