#ifndef BANK_H
#define BANK_H
#include<iostream>
#include<string>
using namespace std;

#include "Customer.h"

class Bank
{
    public:
        Bank();
        Bank(int);
        void addCustomer(Customer);
        void printCustomers();
        void PrintCustomer(string);
        void deposit(int,double);
        void withdraw(int,double);
        void updateAllAccounts();
    protected:
    private:
        Customer* customers;
        int size;
        int counter=0;
};

#endif // BANK_H
