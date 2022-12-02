#include "BankAccount.hpp"
#include <iostream>
#include <cassert>

using namespace std;
using namespace BankAidan;

// implement constructor method
BankAccount::BankAccount(double cash, string name) {
    balance = cash;
    owner = name;
}

// deposits money in account
void BankAccount::deposit(double cash) {
    balance += cash;
    cout << "Deposited: $" << cash << endl;
}

// withdraws money in account
void BankAccount::withdraw(double cash) {
    assert(balance > cash);
    balance -= cash;
    cout << "Withdrew: $" << cash << endl;
}

// changes the owner of account
void BankAccount::changeOwner(string name) {
    owner = name;
    cout << "Changed owner to: " << ownerQuery() << endl;
}

// returns the amount in account
double BankAccount::balanceQuery() {
    return balance;
}

// returns the owner of an account
string BankAccount::ownerQuery() {
    return owner;
}