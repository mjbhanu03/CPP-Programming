#include <iostream>
#include <string>

using namespace std;

class Bank
{
    private:
    int accountNumber;
    int amount = 0;

    public:
    void deposit(int money);
    void withdraw(int money);
    void inquiry();

};

void Bank::deposit(int money)
{
    amount += money;
    cout << "Your amount:" << amount << endl;
}

void Bank::withdraw(int money)
{
    if(amount <= money){
        cout << "Insufficient Balance!" ;
    }
    else{
    amount -= money;
    cout << "Your amount:" << amount << endl;
    }
}

void Bank::inquiry()
{
    cout << "Your amount:" << amount << endl;
}

int main()
{
    Bank person;
    int fun;
    int amt;

    while (true)
    {

    cout << "Enter operation number:\n" << "1. Deposit\n" << "2. Withdraw\n" << "3. Inquiry\n" << "4. Exit\n";
    cin  >> fun;
    switch (fun)
    {
    case 1:
        cout << "Enter deposit amount:\n";
        cin >> amt;
        person.deposit(amt);
        break;

    case 2:
        cout << "Enter withdraw amount:\n";
        cin >> amt;
        person.withdraw(amt);
        break;

    case 3:
        person.inquiry();
        break;
    
    case 4:
        exit(0);
        break;

    default:
        cout << "You entered invalid operation, Please enter 1 to 3 only.\n";
        break;
    }
    }
}