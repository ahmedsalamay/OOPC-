#include "CurrentAccount.h"

CurrentAccount::CurrentAccount()
{
    overDraftLimit=1000;
}

void CurrentAccount::setOverDraftLimit(double o)
{
    overDraftLimit = o;
}

void CurrentAccount::withdraw(double value)
{
    if(balance>value)
    {
        balance-=value;
    }
    else if(value>balance&&value<=(balance+overDraftLimit))
    {
        value-=balance;
        balance = 0;
        overDraftLimit-=value;
    }
    else
    {
        cout << "no enough money" << endl;
    }
}

void CurrentAccount::updateAccount()
{
    creationDate.updateDate();
}

void CurrentAccount::printAccountData()
{
    cout << "Account ID: " << id << endl;
    cout << "Creation Date: "; creationDate.printDate(); cout << endl;
    cout << "Balance: " << balance << endl;
    cout << "Over Draft Limit: " << overDraftLimit << endl;
}
