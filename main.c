#include <stdio.h>
#include "BankAccount.h"

int main() {
    // Create a bank account
    BankAccount account;

    // Initialize the account with name and initial balance
    initializeAccount(&account, "John Doe", 1000.0);

    // Display initial account information
    displayAccountInfo(&account);

    // Perform some transactions
    deposit(&account, 500.0);
    withdraw(&account, 200.0);

    // Display updated account information
    displayAccountInfo(&account);

    return 0;
}
