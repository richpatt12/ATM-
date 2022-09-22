#include <iostream>
using namespace std;
// cryptlib library for saving pin numbers and encrypting

/*
Enter Name, Account number, Account type to be shown during transactions.
Shows the information about the person who is doing the transaction.
Enter amount to deposited in the account.
Shows the Balance in the account.
Enter amount to be withdrawn from the account, and then it shows available balance.
Cancel the transaction.*/
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
    void showMenu() // shows menu for atm application
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
    void transactionDone()
    {
        if (doneWithTransaction == 'N')
        {
            Application();
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
    cout << "Select what option you want to do: " << endl;
    cin >> options;
    switch (options)
    {
    case 1:
        user1.checkBalance();
        cout << "Done with transaction? " << endl;
        cin >> user1.doneWithTransaction;
        while (user1.doneWithTransaction == 'N')
        {
            user1.transactionDone();
        }

        cout << "thanks for using our atm" << endl;
        break;

    case 2:
        user1.withdraw();
        cout << "Done with transaction? " << endl;
        cin >> user1.doneWithTransaction;
        while (user1.doneWithTransaction == 'N')
        {
            user1.transactionDone();
        }

        cout << "thanks for using our atm" << endl;
        break;

    case 3:
        user1.deposit();
        cout << "Done with transaction? " << endl;
        cin >> user1.doneWithTransaction;
        while (user1.doneWithTransaction == 'N')
        {
            user1.transactionDone();
        }

        cout << "thanks for using our atm" << endl;
        break;
    }
    // Learn how to allow user to continue transaction if not done

    return 0;
}
