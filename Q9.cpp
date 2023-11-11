#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 1000.0, withdraw, deposit;
    while (true) {
        cout << "ATM Machine\n";
        cout << "1. Check Balance\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Deposit Funds\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Your current balance is: " << balance << endl;
                break;
            case 2:
                cout << "Enter the amount to withdraw: ";
                cin >> withdraw;
                if (withdraw > balance) {
                    cout << "Insufficient balance." << endl;
                } else {
                    balance -= withdraw;
                    cout << "Withdrawal successful. Your current balance is: " << balance << endl;
                }
                break;
            case 3:
                cout << "Enter the amount to deposit: ";
                cin >> deposit;
                balance += deposit;
                cout << "Deposit successful. Your current balance is: " << balance << endl;
                break;
            case 4:
                cout << "Thank you for using our ATM machine. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
}
