#include "Account.h"
#include "Database.h"
/*An account should have members for:
	account number (id),
	secret personal identification number (pin)
	account balance (balance).*/
void transfer();
void transfer() {


}
	Account::Account()
	{
	}
	Account::Account(int id, int pin)
	{
		Account::acctNumber = id;
		Account::pinNumber = pin;
	}

	bool Account::payin(int idTransferFrom, float amount)
	{
		if (amount < 0){
			cout << "Enter a valid amount" << endl;
			return false;
		}
		else if (amount > 
			)
	}

	bool Account::payout(int idTransferTo, float amount)
	{
		return 0.0f;
	}

	void Account::setID(int id)
	{
		Account::acctNumber = id;
	}
	int Account::getID() const
	{
		return acctNumber;
	}

	void Account::setPin(int pin)
	{
		Account::pinNumber = pin;
	}
	int Account::getPin() const
	{
		return pinNumber;
	}

	float Account::getAcctBalance() const
	{
		return acctBalance;
	}

	