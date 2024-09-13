#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

// Define a structure for BankAccount
typedef struct {
    char accountHolder[50];
    double balance;
} BankAccount;

// Function prototypes
void initializeAccount(BankAccount* account, const char* name, double initialBalance);
void deposit(BankAccount* account, double amount);
void withdraw(BankAccount* account, double amount);
void displayAccountInfo(const BankAccount* account);

#endif
