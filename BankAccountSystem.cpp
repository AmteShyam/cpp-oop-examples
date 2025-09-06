/* First Program: Bank details using OOP */
#include <iostream>
using namespace std;

class Bank {
    int accno;
    double balance;
    string name;

public:
    void accept();
    void display();
    void deposit();
    void withdraw();
};

// Function to accept account details
void Bank::accept() {
    cout << "\nEnter the name: ";
    cin >> name;
    cout << "Enter the account number: ";
    cin >> accno;
    cout << "Enter the initial balance: ";
    cin >> balance;
}

// Function to display account details
void Bank::display() {
    cout << "\nName: " << name
         << "\tAccount No: " << accno
         << "\tBalance: " << balance;
}

// Function to deposit money
void Bank::deposit() {
    double amt;
    cout << "\nEnter amount to deposit: ";
    cin >> amt;
    balance += amt;
    cout << "Deposit successful! New balance: " << balance << endl;
}

// Function to withdraw money
void Bank::withdraw() {
    double amt;
    cout << "\nEnter amount to withdraw: ";
    cin >> amt;
    if (amt <= balance) {
        balance -= amt;
        cout << "Withdrawal successful! New balance: " << balance << endl;
    } else {
        cout << "Insufficient balance!\n";
    }
}

int main() {
    Bank b[3]; // Array of 3 accounts
    int choice, cont;

    do {
        cout << "\n--- Main Menu ---";
        cout << "\n1. Accept Details";
        cout << "\n2. Display Details";
        cout << "\n3. Deposit Amount";
        cout << "\n4. Withdraw Amount";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < 3; i++) {
                    cout << "\nEnter details for Account " << i + 1 << ":";
                    b[i].accept();
                }
                break;

            case 2:
                cout << "\n--- Account Details ---";
                for (int i = 0; i < 3; i++) {
                    b[i].display();
                }
                cout << endl;
                break;

            case 3:
                for (int i = 0; i < 3; i++) {
                    cout << "\nDeposit for Account " << i + 1;
                    b[i].deposit();
                }
                break;

            case 4:
                for (int i = 0; i < 3; i++) {
                    cout << "\nWithdraw from Account " << i + 1;
                    b[i].withdraw();
                }
                break;

            default:
                cout << "\nInvalid choice!";
        }

        cout << "\nDo you want to continue? (1 = Yes / 0 = No): ";
        cin >> cont;

    } while (cont == 1);

    return 0;
}
