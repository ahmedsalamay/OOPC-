#include "SavingAccount.h"
#include<iostream>
#include<string>
using namespace std;


SavingAccount::SavingAccount()
{
    interestRate=0.1;
}

void SavingAccount::setInterestRate(double i)
{
    interestRate = i;
}

void SavingAccount::withdraw(double value)
{
    if(value>balance){cout << "No enough money" << endl;}
    else
    {
        balance-=value;
    }
}

void SavingAccount::updateAccount()
{
    balance+=balance*interestRate;
    creationDate.updateDate();
}

void SavingAccount::printAccountData()
{
    cout << "Account ID  " << id << endl;
    cout << "Balance  " << balance << endl;
    cout << "Creation Date  "; creationDate.printDate(); cout << endl;
}
