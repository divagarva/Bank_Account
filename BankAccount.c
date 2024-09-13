#include <stdio.h>
#include <string.h>
#include "BankAccount.h"

// Function to initialize the account
void initializeAccount(BankAccount* account, const char* name, double initialBalance) {
    strncpy(account->accountHolder, name, sizeof(account->accountHolder) - 1);
    account->balance = initialBalance;
}

// Function to deposit money into the account
void deposit(BankAccount* account, double amount) {
    if (amount > 0) {
        account->balance += amount;
        printf("Deposited: $%.2f\n", amount);
    } else {
        printf("Invalid deposit amount!\n");
    }
}

// Function to withdraw money from the account
void withdraw(BankAccount* account, double amount) {
    if (amount > 0 && amount <= account->balance) {
        account->balance -= amount;
        printf("Withdrew: $%.2f\n", amount);
    } else {
        printf("Invalid withdrawal amount or insufficient balance!\n");
    }
}

// Function to display account information
void displayAccountInfo(const BankAccount* account) {
    printf("Account Holder: %s\n", account->accountHolder);
    printf("Current Balance: $%.2f\n", account->balance);
}
