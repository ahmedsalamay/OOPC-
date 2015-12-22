#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>
#include<string>
using namespace std;

#include "Date.h"

class Account
{
    public:
        Account();
        void setBalance(double);
        double getBalance();
        Date getCreationDate();
        virtual void updateAccount();
        virtual void withdraw(double);
        void deposit(double);
        void setAccountData(string,double,Date);
        virtual void printAccountData();
    protected:
        Date creationDate;
        double balance;
        string id;

};

#endif // ACCOUNT_H
