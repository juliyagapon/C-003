#include "SavingsAccount.h"
#include "CheckingAccount.h"


int main() {
    SavingsAccount savings("S001", "John Doe", 500.0, 100.0);
    CheckingAccount checking("C001", "Jane Doe", 300.0, 100.0, 25.0);

    savings.deposit(200.0);
    savings.withdraw(150.0);
    savings.printTransactionHistory();

    checking.deposit(100.0);
    checking.withdraw(400.0);
    checking.printTransactionHistory();

    return 0;
}
