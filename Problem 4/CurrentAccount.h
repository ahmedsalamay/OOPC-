#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H
#include<iostream>
#include<string>
using namespace std;


#include "Account.h"

class CurrentAccount:public Account
{
    public:
        CurrentAccount();
        void setOverDraftLimit(double);
        void withdraw(double);
        void updateAccount();
        void printAccountData();
    protected:
    private:
        double overDraftLimit;
};

#endif // CURRENTACCOUNT_H
