//
// Created by dustinkgreco on 2/27/22.
//

#ifndef CCPPDC_BANKACCOUNT_H
#define CCPPDC_BANKACCOUNT_H
#include <string>

using namespace std;

class BankAccount {
public:
    // Constructors
    BankAccount(string owner, double balance);

    // Accessors
    void deposit(double amount);
    void withdraw(double amount);

    // Getters
    string getOwner() const;
    double getBalance() const;

    // Printers
    void printAccountDetails() const;

private:
    double balance;
    string owner;
};
#endif //CCPPDC_BANKACCOUNT_H
