#include <iostream>
using namespace std;
// cryptlib library for saving pin numbers and encrypting

// class start
class Application
{
public:
    float balance = 500.00;   // starting balance
    int pin;                  // variable to store user pin
    char doneWithTransaction; // checks if user is done with transaction
    float newBalance;
    float withdrawAmount;

    void pinNumber()
    {
        // make the user only be able to enter 4 digits.
        cout << "Please enter 4 digit pin number before continuing" << endl;
        cin >> pin;
        if (pin < 1111 || pin > 9999)
        {
            cout << "Invalid pin number" << endl;
            pinNumber();
        }
        else
        {
            cout << "Welcome to your account" << endl;
        }
    }
    void showMenu()
    {
        cout << "********** Menu **********" << endl;
        cout << "Please select what you need from the options below" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Deposit" << endl;
    }
    void checkBalance()
    {
        cout << "Your Balance is currently $" << balance << endl;
    }
    void withdraw()
    {

        cout << "Enter amount you want to withdraw. " << endl;
        cin >> withdrawAmount;
        if (withdrawAmount > balance)
        {
            cout << "Insufficient amount. Please enter an amount less or equal to current balance." << endl;
            cin >> withdrawAmount;
        }
        else
        {
            newBalance = balance - withdrawAmount;
            cout << "Your new balance is: " << newBalance << endl;
        }
    }
    void deposit()
    {
        float depositAmount;
        cout << "How much will you like to deposit? " << endl;
        cin >> depositAmount;
    }
    // include done with transaction feature
    void transaction()
    {
        cout << "Are you done with your transaction? Please type Y or N" << endl;
        cin >> doneWithTransaction;
        if (doneWithTransaction == 'N')
        {
            showMenu();
        }
        else
        {
            cout << "Thanks for using the ATM" << endl;
        }
    }
};

// class end

int main()
{
    Application user1;
    int options;

    user1.pinNumber();
    user1.showMenu();
    cout << "Enter option here: " << endl;
    cin >> options;
    switch (options)
    {
    case 1:
        user1.checkBalance();

        break;

    case 2:
        user1.withdraw();

        break;
    case 3:
        user1.deposit();

        break;
    }

    return 0;
}
