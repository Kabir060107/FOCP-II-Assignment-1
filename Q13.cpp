#include <iostream>

using namespace std;

int main() {
    // Declare variables
    double balance = 1000.0; // Initial balance
    int choice;
    double amount;
    
    do {
        // Display menu
        cout << "\nATM Machine" << endl;
        cout << "1. Withdraw" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Balance Inquiry" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        // Process user choice
        switch (choice) {
            case 1:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance!" << endl;
                } else if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful. New balance: " << balance << endl;
                }
                break;
            
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                } else {
                    balance += amount;
                    cout << "Deposit successful. New balance: " << balance << endl;
                }
                break;
            
            case 3:
                cout << "Your current balance is: " << balance << endl;
                break;
            
            case 4:
                cout << "Exiting... Thank you for using the ATM!" << endl;
                break;
            
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);
    
    return 0;
}
