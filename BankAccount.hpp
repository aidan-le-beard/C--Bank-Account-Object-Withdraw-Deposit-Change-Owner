#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP
#include <iostream>
#include <string>

using namespace std;

namespace BankAidan {

class BankAccount {
    
// methods to deposit, withdraw, change owner, and return balance and owner    
public:

    // pre: takes a double value and string value
    // post: the given value is the balance, and the given string is the owner
    BankAccount(double cash, string name);
    
    // pre: a double value is given
    // post: the value is added to the balance
    void deposit(double cash);
    
    // pre: there must be a larger balance than is attempting to be withdrawn
    // post: cash is subtracted from the balance
    void withdraw(double cash);
    
    // pre: must be given a string
    // post: the owner of the account is now the given string
    void changeOwner(string name);
    
    // pre: must be used by an existing bank account
    // post: returns the current balance
    double balanceQuery();
    
    // pre: must be used by an existing bank account
    // post: returns the current owner
    string ownerQuery();

// variables to hold the balance and owner
private:
    double balance;
    string owner;

}; // end class

} // end namespace

#endif // BANKACCOUNT_HPP
