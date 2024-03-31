#include <iostream>
using namespace std;

enum AccountType
{
    SAVINGS,
    CURRENT
};

class Account
{
protected:
    string accountNumber;
    double balance;

public:
    Account(string accNumber, double initBalance) : accountNumber(accNumber), balance(initBalance) {}

    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount deposited: " << amount << endl;
    }

    void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }

    void accountInfo()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account
{
protected:
    double interestRate;
    int period;

public:
    SavingsAccount(string accNumber, double initBalance) : Account(accNumber, initBalance) {}

    void setInterestRate(double interestRate)
    {
        this->interestRate = interestRate;
    }

    void setPeriod(int period)
    {
        this->period = period;
    }

    void calculateInterest()
    {
        double interest = balance * interestRate * period;
        cout << "Interest: " << interest << endl;
    }

    void savingsAccountInfo()
    {
        accountInfo();
        cout << "Interest Rate: " << interestRate << endl;
        cout << "Period: " << period << endl;
    }
};

class CurrentAccount : public Account
{
protected:
    double overDraftLimit;

public:
    CurrentAccount(string accNumber, double initBalance) : Account(accNumber, initBalance) {}

    void setOverDraftLimit(double overDraftLimit)
    {
        this->overDraftLimit = overDraftLimit;
    }

    void currentAccountInfo()
    {
        accountInfo();
        cout << "Overdraft Limit: " << overDraftLimit << endl;
    }
};

class JointAccount : public SavingsAccount, public CurrentAccount
{
public:
    JointAccount(string accNumber, double initBalance) : SavingsAccount(accNumber, initBalance), CurrentAccount(accNumber, initBalance)
    {
    }

    void deposit(double amount, AccountType accountType)
    {
        if (accountType == SAVINGS)
        {
            SavingsAccount::deposit(amount);
        }
        else if (accountType == CURRENT)
        {
            CurrentAccount::deposit(amount);
        }
    }

    void withdraw(double amount, AccountType accountType)
    {
        if (accountType == SAVINGS)
        {
            SavingsAccount::withdraw(amount);
        }
        else if (accountType == CURRENT)
        {
            CurrentAccount::withdraw(amount);
        }
    }

    void jointAccountInfo()
    {
        cout << "Joint Account Info" << endl;
        cout << "------------------" << endl;
        cout << "Savings Account Info" << endl;
        savingsAccountInfo();
        cout << "------------------" << endl;
        cout << "Current Account Info" << endl;
        currentAccountInfo();
    }
};

int main()
{
    JointAccount jointAccount("123456", 1000);
    jointAccount.setInterestRate(0.05);
    jointAccount.setPeriod(2);
    jointAccount.setOverDraftLimit(500);

    cout << "Savings Account Operations" << endl;
    jointAccount.deposit(500, AccountType::SAVINGS);
    jointAccount.withdraw(200, AccountType::SAVINGS);
    jointAccount.calculateInterest();
    cout << endl;

    cout << "Current Account Operations" << endl;
    jointAccount.deposit(500, AccountType::CURRENT);
    jointAccount.withdraw(200, AccountType::CURRENT);
    cout << endl;

    jointAccount.jointAccountInfo();

    return 0;
}
