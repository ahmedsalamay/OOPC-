#include "Bank.h"
#include <sstream>

Bank::Bank()
{
    size = 10;
    customers = new Customer[size];
}

Bank::Bank(int size)
{
    this->size=size;
    customers=new Customer[size];
}

void Bank::addCustomer(Customer c)
{
    customers[counter]=c;

    stringstream ss;
    string id;
    ss << counter;
    ss >> id;
    ss.clear();

    customers[counter].setID(id);

    counter++;
}

void Bank::deposit(int index,double value)
{
    customers[index].getAccount()->deposit(value);
}

void Bank::withdraw(int index,double value)
{
    customers[index].getAccount()->withdraw(value);
}

void Bank::PrintCustomer(string id)
{
    for(int i=0;i<counter;i++)
    {
        if(customers[i].getID()==id){customers[i].desplayCustomerData(); return;}
    }
    cout << "Customer not found" << endl;
}

void Bank::updateAllAccounts()
{
    cout << "Current Date is: "; customers[0].getAccount()->getCreationDate().printDate(); cout << endl;
    for(int i=0;i<counter;i++)
    {
        customers[i].getAccount()->updateAccount();
    }
    cout << "New Date is: "; customers[0].getAccount()->getCreationDate().printDate(); cout << endl;
    cout << "All saved accounts have been updated" << endl;
}

void Bank::printCustomers()
{
    for(int i=0;i<counter;i++)
    {
        customers[i].desplayCustomerData();
        cout << endl;
    }
}
