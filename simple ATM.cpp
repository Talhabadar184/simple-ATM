#include <iostream>
using namespace std;

int main() {

    double* balance = new double(100000);
    int op;
    double amount;
    int pin;

    cout << "\t\t\t\t\t\tWelcome to the ATM" << endl;
    

    cout << "Please enter your card pin:";
    cin >> pin;
    
    if (pin != 0)
    {

        cout << endl;
        cout << "Please select an option : " << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Exit" << endl;

        cout << endl;
        cout << "Select option:" << endl;
        cin >> op;

        switch (op) {
        case 1: {
            cout << "Your current balance is Rs" << *balance << endl << endl;
            cout << "\t\t\t\t\t\tThank you for using this ATM." << endl;
            break;
        }
        case 2: {

            cout << "Enter amount to withdraw: Rs";
            cin >> amount;
            cout << endl;
            if (amount > *balance) {
                cout << "Low Balance. Transaction cancelled." << endl;
            }
            else {
                *balance -= amount;
                cout << "Rs" << amount << " has been withdrawn from your account." << endl;
                cout << "Your new balance is Rs" << *balance <<endl<< endl;
                cout << "\t\t\t\t\tThank you for using this ATM." << endl;
            }
            break;
        }
        case 3:
            cout << "Thank you for using this ATM." << endl;
            break;
        default:
            cout << "Invalid option. Try again." << endl;
            break;
        }
    }
    else if (pin == 0)
    {
        cout << "Invalid pin";
    }
    delete balance;
    
} 
