/*Define a class to represent a bank account. Include the following members: 
1. Data Member: 
-Name of the depositor 
-Account Number 
-Type of Account 
-Balance amount in the account

2. Member Functions 
-To assign values 
-To deposited an amount 
-To withdraw an amount after checking balance 
-To display name and balance
*/

#include<iostream>
#include<stdio.h>
using namespace std;

class Account {

    private:

    string holder_name;
    int account_num;
    int account_balance;
    int cash_deposit;
    int cash_withdrawal;
    int a,balance;

    public:

    void assign()
    {
        cout<<"Enter the name of the account holder :";
        cin>>holder_name;
        cout<<"Enter the account number :";
        cin>>account_num;
        cout<<endl<<"Press '1' for FIXED DEPOSIT ACCOUNT \t";
        cout<<"Press '2' for SAVINGS ACCOUNT"<<endl;
        cout<<endl<<"Enter number : ";
        cin>>a;
        if(a==1)
        {
            cout<<"Account Type: FIXED DEPOSIT"<<endl;
        }
        else 
        {
            cout<<"Account Type: SAVINGS"<<endl;
        }
        balance=10000;
        cout<<"Current Balance :Rs."<<balance<<endl;
    }

    int deposit()
    {
        cout<<endl<<"Enter the amount to deposit :Rs.";
        cin>>cash_deposit;
        balance=balance+cash_deposit;
    }

    int withdraw()
    {
        cout<<endl<<"Enter the amount to withdraw :Rs.";
        cin>>cash_withdrawal;
    }

    int display()
    {
        cout<<endl<<"________DETAILS________"<<endl;
        cout << "Name of the account holder :"<<holder_name<<endl;
        cout << "Account number :"<<account_num<<endl;
        if(a==1)
        {
            cout<<"Account Type: FIXED DEPOSIT"<<endl;
        }
        else
        {
            cout<<"Account Type: SAVINGS"<<endl;
        }

        if(cash_withdrawal<=balance)
        {
            cout<< "Account Balance :Rs."<<balance-cash_withdrawal;
        }
        else
        {
            cout<<"Account Balance : Insufficient";
        }
    }
};

int main()
{
    Account bank;
    bank.assign();
    bank.deposit();
    bank.withdraw();
    bank.display();
}