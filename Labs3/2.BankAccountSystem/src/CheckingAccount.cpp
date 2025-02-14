#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string accNum, std::string owner, double bal, double overdraftLim, double fee)
    : Account(accNum, owner, bal), overdraftLimit(overdraftLim), overdraftFee(fee) {}

void CheckingAccount::withdraw(double amount) {
    if (balance - amount < -overdraftLimit) {
        logTransaction("Withdrawal denied: Overdraft limit exceeded.");
        std::cout << "Error: Overdraft limit exceeded. Cannot withdraw.\n";
    } else {
        balance -= amount;
        logTransaction("Withdrew: $" + std::to_string(amount));

        if (balance < 0) {
            balance -= overdraftFee;
            logTransaction("Overdraft Fee Charged: $" + std::to_string(overdraftFee));
        }
    }
}
