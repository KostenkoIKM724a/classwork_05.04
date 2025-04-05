#include <iostream>
using namespace std;

const int BANKACCOUNTS_NUMBER = 1;

struct BankAccount {
    string name;
    int accountNumber;
    int balance;
};

struct Bank {
    string name;
    BankAccount bankaccounts[BANKACCOUNTS_NUMBER];
};
int main()
{
    Bank Sparkasse;
    cout << "Enter Bank name: ";
    cin >> Sparkasse.name;

    for (int i = 0; i < BANKACCOUNTS_NUMBER; i++)
    {
        cout << "Please enter the owner's name: ";
        cin >> Sparkasse.bankaccounts[i].name;
        cout << "Please enter the account number: ";
        cin >> Sparkasse.bankaccounts[i].accountNumber; 
        cout << "How much money is in your balance right now? ";
        cin >> Sparkasse.bankaccounts[i].balance;
        cout << "Please enter how much you would like to withdraw? ";
        int sumToWithdraw;
        cin >> sumToWithdraw;
        Sparkasse.bankaccounts[i].balance -= sumToWithdraw;

        cout << "Transaction Succeed. Now your balance is: " << Sparkasse.bankaccounts[i].balance;
        cout << endl;
    }
}
