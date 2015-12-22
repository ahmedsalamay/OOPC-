#include <iostream>
#include <sstream>
#include "Bank.h"
#include "CurrentAccount.h"
#include "SavingAccount.h"
using namespace std;

int main()
{
    int cn;
    cout << "Enter Customer number : "; cin >> cn;

    Bank b1(cn);

    char x;
    while(true)
    {
        cout << endl;
        cout << "1.Add Customer" << endl;
        cout << "2.View all customers" << endl;
        cout << "3.Next month/update accounts" << endl;
        cout << "4.View one customer data" << endl;
        cout << "5.Deposit" << endl;
        cout << "6.Withdraw" << endl;
        cout << "0.Exit" << endl;

        cin >> x;

        if(x=='1')
        {
            string n; int i; int t;
            cout << "Enter Customer Name: "; cin >> n;
            cout << "Enter Customer Age: "; cin >> i;
            cout << "Choose Account Type:" << endl;
            cout << "1.Current Account" << "\n" << "2.Saving Account" << endl; cin >> t;
            if(t==1){Account *ac=new CurrentAccount; Customer cu(n,i,ac); b1.addCustomer(cu);}
            else{Account *ac=new SavingAccount; Customer cu(n,i,ac); b1.addCustomer(cu);}
        }
        else if(x=='2')
        {
            b1.printCustomers();
        }
        else if(x=='3')
        {
            b1.updateAllAccounts();
        }
        else if(x=='4')
        {   string id;
            cout << "Enter Customer ID: "; cin >> id;
            b1.PrintCustomer(id);
        }
        else if(x=='5')
        {
            string id; int x; double value;

            cout << "Enter customer id to deposit his money: "; cin >> id;
            cout << "Enter the amount of money to deposit: "; cin >> value;
            stringstream mm;
            mm << id; mm >> x;
            b1.deposit(x,value);
            mm.clear();
            cout << "the money has been deposited" << endl;
        }
        else if(x=='6')
        {
            string id; int x; double value;
            cout << "Enter customer id to withdraw from his money"; cin >> id;
            cout << "Enter the amount of money you want to withdraw"; cin >> value;
            stringstream mm;
            mm << id; mm >> x;
            mm.clear();
            b1.withdraw(x,value);
        }
        else if(x=='0'){break;}
        else {cout << "Invalid Character" << endl;}
    }

    return 0;
}
