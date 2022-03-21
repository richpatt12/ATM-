#include <iostream>

using namespace std;
//cryptlib library for saving pin numbers and encrypting 

float balance = 500; //starting balance
int pin;//variable to store user pin

//Pin function
void pinNumber(){
    //make the user only be able to enter 4 digits.
    cout<< "Please enter 4 digit pin number before continuing"<<endl;
    cin >>pin;    
}

//Menu Function
void showMenu(){
    cout<< "**********Menu**********"<<endl;
    cout <<"Please select what you need from the options below"<<endl;
    cout << "1. Check Balance"<< endl;
    cout << "2. Withdraw"<< endl;
    cout << "3. Deposit"<< endl;
}

//balance
void checkBalance(){
    cout << "Your Balance is currently $"<< balance <<endl;
}

//withdraw
void withdraw(){
    float newBalance;
    float withdrawAmount;
    cout << "Enter amount you want to withdraw. "<<endl;
    cin >> withdrawAmount;
    if(withdrawAmount > balance){
        cout <<"Insufficient amount. Please enter an amount less or equal to current balance." <<endl;
        cin >> withdrawAmount;
        
    }else{
    newBalance = balance - withdrawAmount;
    cout << newBalance<< endl;
    }  
}

//deposit
void deposit(){

}

//main fucntion
int main()
{
    int options;
    pinNumber();
    showMenu();
    cout << "Enter option here: "<<endl;
    cin >> options; 
    switch (options)
    {
    case 1:
        checkBalance();
        break;
    
    case 2:
        withdraw();
        break;
    }
    
    cout<< "Are you done with your transaction?"<<endl;
    
    
    
    
    return 0;
}
