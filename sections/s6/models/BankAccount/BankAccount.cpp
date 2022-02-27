//
// Created by dustinkgreco on 2/27/22.
//
#include "BankAccount.h"
#include <iostream>
using namespace std;
// Constructor Definitions
BankAccount::BankAccount(string owner, double balance)
{
    this->owner = owner;
    this->balance = balance;
}

// Destructor Definition

// Getter Definitions
string BankAccount::getOwner() const
{
    return this->owner;
}

double BankAccount::getBalance() const
{
    return this->balance;
}

// Accessors
void BankAccount::deposit(double amount)
{
    const bool validDepositAmount = amount >= 0.0;
    if(validDepositAmount)
    {
        this->balance = (this->balance + amount);
    }
    else
    {
        cout << "Invalid Amount. Action Denied" << endl;
    }
}

void BankAccount::withdraw(double amount)
{
    const bool validWithdrawlAmount = amount >= 0.0;
    const bool balanceCoversRequest = this->getBalance() >= amount;

    if (validWithdrawlAmount && balanceCoversRequest)
    {
        this->balance = (this->balance - amount);
    }
    else
    {
        cout << "Invalid Amount. Action Denied" << endl;
    }
}

void BankAccount::printAccountDetails() const
{
    cout << "Printing Account Details" << endl;
    cout << "========================" << endl;
    cout << "Account Owner: " << this->getOwner() << endl;
    cout << "Account Balance: $" << this->getBalance() << endl;
    cout << endl << endl;
}