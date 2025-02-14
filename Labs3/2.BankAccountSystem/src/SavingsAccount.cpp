#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string accNum, std::string owner, double bal, double minBal)
    : Account(accNum, owner, bal), minBalance(minBal) {}

void SavingsAccount::withdraw(double amount) {
    if (balance - amount < minBalance) {
        logTransaction("Withdrawal denied: Insufficient funds.");
        std::cout << "Error: Cannot withdraw. Minimum balance requirement not met.\n";
    } else {
        balance -= amount;
        logTransaction("Withdrew: $" + std::to_string(amount));
    }
}
