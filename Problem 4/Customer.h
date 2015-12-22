#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
#include<string>
using namespace std;

#include "Account.h"

class Customer
{
    public:
        Customer();
        Customer(string,int,Account*);
        void desplayCustomerData();
        void setCustomerData(string,int,string);
        Account* getAccount();
        void setID(string);
        string getID();
    private:
        string name;
        int age;
        Account *account;
        string id;
};

#endif // CUSTOMER_H
