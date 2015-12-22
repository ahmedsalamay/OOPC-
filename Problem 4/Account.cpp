#include "Account.h"

Account::Account()
{
    id = "";
    creationDate.setDate(27,12,2014);
    balance = 0.0;
}

Date Account::getCreationDate()
{
    return creationDate;
}

void Account::updateAccount()
{

}

void Account::setAccountData(string i,double b,Date c)
{
    id = i;
    balance = b;
    creationDate = c;
}

void Account::setBalance(double b)
{
    balance = b;
}

double Account::getBalance()
{
    return balance;
}

void Account::withdraw(double value)
{

}

void Account::deposit(double value)
{
    balance+=value;
}

void Account::printAccountData()
{

}
