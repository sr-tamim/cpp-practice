/*
Problem 2: Mkash Account Management
Create a class `Account` with attributes `accountNumber`, `accountHolder`, and `balance`.
Implement a parameterized constructor to initialize these attributes. Overload the constructor to
handle both initial balance and without initial balance cases. Create methods for deposit and
withdrawal. Display the account details after each transaction.
Sample Input:
Account 1: Account Number - 1001, Account Holder - "Alice"
Account 2: Account Number - 1002, Account Holder - "Bob", Initial Balance - 5000

Sample Output:
Account 1 created with balance 0.
Account 2 created with balance 5000.
Deposit 1: 1500. New Balance: 1500.
Withdrawal 1: 800. New Balance: 700.
*/

#include <iostream>
using namespace std;

class Account
{
public:
    int accountNumber;
    string accountHolder;
    int balance;

    Account(int accNumber, string accHolder)
    {
        accountNumber = accNumber;
        accountHolder = accHolder;
        balance = 0;
        cout << "Account " << accountNumber << " created with balance " << balance << "." << endl;
    }

    Account(int accNumber, string accHolder, int initialBalance)
    {
        accountNumber = accNumber;
        accountHolder = accHolder;
        balance = initialBalance;
        cout << "Account " << accountNumber << " created with balance " << balance << "." << endl;
    }

    void deposit(int amount)
    {
        balance += amount;
        cout << "Deposit " << amount << ": New Balance: " << balance << "." << endl;
    }

    void withdrawal(int amount)
    {
        balance -= amount;
        cout << "Withdrawal " << amount << ": New Balance: " << balance << "." << endl;
    }
};

int main()
{
    Account a1(1001, "Alice");
    Account a2(1002, "Bob", 5000);
    a1.deposit(1500);
    a1.withdrawal(800);
    return 0;
}
