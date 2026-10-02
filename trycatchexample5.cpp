#include<iostream>
using namespace std;

int main()
{
    int balance = 5000;
    int amount;

    cout << "\nEnter the amount: ";
    cin >> amount;

    try
    {
        if(amount > balance)
        {
            throw "\nInsufficient balance";
        }
        else
        {
            balance = balance - amount;

            cout << "\nWithdraw amount: " << amount;
            cout << "\nRemaining balance: " << balance;
        }
    }

    catch(const char *x)
    {
        cout << "\nException: " << x;
    }

    return 0;
}