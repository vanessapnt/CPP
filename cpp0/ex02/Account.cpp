#include "Account.hpp"

//int Account::checkAmount(void) const {  // Use :: for method definition

// Static method call (no object needed)
//Account::getTotalAmount();      // Use :: for static members

// Non-static method call (needs object)
//Account acc(100);
//acc.checkAmount();             // Use . for object methods

void	Account::makeDeposit( int deposit )
{
    this->_amount += deposit; 
    Account::_totalAmount += deposit; //static
    this->_totalNbDeposits++;
    Account::_totalNbDeposits++; //static
}

/*
1. `this->_amount`:
   - `_amount` is a non-static member (instance variable)
   - Each account has its own `_amount`
   - Must be accessed through an instance (using `this->`)

2. `Account::_totalAmount`:
   - `_totalAmount` is a static member (class variable)
   - Shared by all Account instances
   - Must be accessed through the class name (using `::`)
*/

int		Account::checkAmount( void ) const
{
    return this->_amount;
}

// Non-member static functions:
// Cannot use this pointer
// Must access static class members using the scope resolution operator (::)

bool	makeWithdrawal( int withdrawal )
{

}
void	displayStatus( void )
{

}