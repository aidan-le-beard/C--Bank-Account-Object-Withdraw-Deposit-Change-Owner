#include <stdio.h>
#include "BankAccount.hpp"
#include <iostream>

using namespace std;
using namespace BankAidan;

void printBalanceOwner(BankAccount b1) {
    
    // tests balance and owner queries
    cout << "Current balance is: $" << b1.balanceQuery() << endl;
    cout << "Current owner is: " << b1.ownerQuery() << endl;
}

// test program tests all methods to check the implementation of the class
int main(int argc, char **argv) {
    
    // call constructor and create an object
    BankAccount b1(100, "Aidan");
    
    // call method that prints owner and balance by using the query methods
    printBalanceOwner(b1);
    
    // test withdraw method and print updated balance
    b1.withdraw(57.36);
    
    printBalanceOwner(b1);
    
    // test deposit method and owner change method
    b1.deposit(378.05);
    b1.changeOwner("George");
    
    // print updated owner and balance
    printBalanceOwner(b1);

	return 0;
} // end main
