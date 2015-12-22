#include "Customer.h"

Customer::Customer()
{

}

Customer::Customer(string n,int a,Account *ac)
{
    name = n;
    age = a;
    account = ac;
    id = "";
}

void Customer::setID(string i)
{
    id = i;
}

Account* Customer::getAccount()
{
    return account;
}

void Customer::desplayCustomerData()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "ID: " << id << endl;
    cout << "Account Data: " << endl; account->printAccountData();

}

string Customer::getID()
{
    return id;
}
