#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H
#include<iostream>
#include<string>
using namespace std;

#include "Account.h"

class SavingAccount:public Account
{
    public:
        SavingAccount();
        void withdraw(double);
        void updateAccount();
        void setInterestRate(double);
        void printAccountData();
    protected:
    private:
        float interestRate;
};

#endif // SAVINGACCOUNT_H
