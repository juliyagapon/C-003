#include "Account.h"

Account::Account(std::string accNum, std::string owner, double bal) 
    : accountNumber(accNum), ownerName(owner), balance(bal) {}

void Account::deposit(double amount) {
    balance += amount;
    logTransaction("Deposited: $" + std::to_string(amount));
}

void Account::logTransaction(const std::string& transaction) {
    transactionHistory.push_back(transaction);
}

void Account::printTransactionHistory() const {
    std::cout << "Transaction History for " << ownerName << " (" << accountNumber << "):\n";
    for (const auto& trans : transactionHistory) {
        std::cout << "- " << trans << "\n";
    }
}

double Account::getBalance() const {
    return balance;
}

std::string Account::getAccountNumber() const {
    return accountNumber;
}

std::string Account::getOwnerName() const {
    return ownerName;
}

std::ostream& operator<<(std::ostream& os, const Account& account) {
    os << "Account Number: " << account.accountNumber << "\n"
       << "Owner: " << account.ownerName << "\n"
       << "Balance: $" << account.balance << "\n";
    return os;
}
