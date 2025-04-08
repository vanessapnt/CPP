#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip> //for setfill() and setw()

//static members must be initialized once outside the class 
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// constructor is defining how to to construct an instance of the Account class
// but it's not actually creating an instance yet
// This is when you actually create an instance:
// Account myAccount(1000) in main.cpp
Account::Account(int initial_deposit)
{
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
}

Account::~Account(void)
{
    Account::_nbAccounts--;
    Account::_totalAmount -= this->_amount;
}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}
int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}
int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}
void    Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() 
              << ";total:" << Account::getTotalAmount()
              << ";deposits:" << Account::getNbDeposits()
              << ";withdrawals:" << Account::getNbWithdrawals()
              << std::endl;
}

//keyword "static" only needed in the declaration(.hpp)
//no need in the implementation (.cpp)

/*
### Static Members (Variables)
- Shared across all instances of the class
- Only one copy exists in memory
- Can be accessed without creating an instance

### Static Methods (Functions)
- Can be called without creating an instance
- Cannot access non-static members
- Cannot use `this` pointer
- Cannot be declared `const` (as they don't have an instance)
*/

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

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount < withdrawal)
		return false;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	return true;
}

void	Account::_displayTimestamp(void)
{
    std::time_t result = std::time(nullptr); //time spent since 01/01/1970 00:00:00 UTC //format : 1712594378
    std::tm* timeinfo = std::localtime(&result); //to tm structure
    
    std::cout << "[";
    std::cout << std::setfill('0') << std::setw(4) << timeinfo->tm_year + 1900; //tm_year : time spent since 1900 
    std::cout << std::setfill('0') << std::setw(2) << timeinfo->tm_mon + 1; //tm_mon : months from 0 to 11
    std::cout << std::setfill('0') << std::setw(2) << timeinfo->tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2) << timeinfo->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << timeinfo->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << timeinfo->tm_sec;
    std::cout << "] ";
}
/*
struct tm {
    int tm_sec;   // secondes (0-61)
    int tm_min;   // minutes (0-59)
    int tm_hour;  // heures (0-23)
    int tm_mday;  // jour du mois (1-31)
    int tm_mon;   // mois (0-11)
    int tm_year;  // années depuis 1900
    // ...autres membres...
};

- `setw(n)`: 
  - Sets the width of the next output field
  - If number is smaller than width, fills with characters
  - Example: `setw(2)` for "5" gives " 5"

- `setfill(char)`:
  - Sets which character to use for filling
  - Only works with `setw`
  - Example: `setfill('0')` with `setw(2)` for "5" gives "05"
*/

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "deposits:" << this->_nbDeposits << ";"
			  << "withdrawals:" << this->_nbWithdrawals 
			  << std::endl;
}
/*
  format from test file: 
	[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
*/