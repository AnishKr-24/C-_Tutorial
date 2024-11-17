
// ATM Machine code.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string card;
    string name = "Anish Kumar";
    int pin = 6869;
    int enterpin , option , balance=100000 , amount;
    cout<<"Enter the card=";
    cin>>card;
    cout<<"Enter the pin=";
    cin>>enterpin;
    if (enterpin != pin)
    {
        cout<<"Incorrect Password"<<endl;
        return 0;
        
    }
    else if (enterpin == pin)
    {
        cout<<"Goto Next Step"<<endl;
        
    }
    
    cout<<"Acount Holder name : "<<name<<endl;
    while (true)
    {
        cout << "Choose an option:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your option: ";
        cin >> option;
        switch (option)
        {
        case 1 :
            cout<<"Your Blance="<<balance<<endl;
            break;
        case 2 :
            cout << "Enter the amount to withdraw:";
                cin >> amount;
                if (amount > balance) 
                {
                    cout << "Insufficient Balance:" << endl;
                } else 
                {
                    balance = balance - amount;
                    cout << "Withdrawal successful. Remaining balance:" << balance << endl;
                }
                break;
        case 3:
            cout << "Enter the amount to deposit: ";
            cin >> amount;
            balance = balance +  amount;
            cout << "Deposit successful. Current balance: " << balance << endl;
            break;
        case 4:
            cout << "Thank you " << endl;
            exit;
        default:
            cout << "Invalid option " << endl;
            break;
        }
    }
    
    
}