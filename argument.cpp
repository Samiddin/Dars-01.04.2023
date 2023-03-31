#include <iostream>
#include <string>

using namespace std;

// BankAccount class
class BankAccount {
private:
    string name;
    double balance;
public:
    BankAccount(string n, double b) {
        name = n;
        balance = b;
    }
    void transferTo(BankAccount& other, double amount) {
        if (balance >= amount) {
            balance -= amount;
            other.balance += amount;
            cout << amount << " transferred from " << name << " to " << other.name << endl;
        }
        else {
            cout << "Insufficient funds in " << name << " account" << endl;
        }
    }
    void displayBalance() {
        cout << name << " balance: " << balance << endl;
    }
};

int main() {
    BankAccount account1("John Doe", 1000.0);
    BankAccount account2("Jane Smith", 500.0);

    account1.displayBalance();
    account2.displayBalance();

    account1.transferTo(account2, 200.0);

    account1.displayBalance();
    account2.displayBalance();

    account2.transferTo(account1, 1000.0);

    account1.displayBalance();
    account2.displayBalance();

    return 0;
}
