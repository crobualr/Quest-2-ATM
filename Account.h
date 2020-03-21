#pragma once
/*An account should have members for:
	account number (id), 
	secret personal identification number (pin) 
	account balance (balance).*/
class Account {
public:
	Account();
	Account(int id, int pin);

	bool payin(int idTransferFrom, float amount);
	bool payout(int idTransferTo, float amount);

	void setID(int id);
	int getID() const;

	void setPin(int pin);
	int getPin() const;
	
	float getAcctBalance() const;
private:
	int acctNumber;
	int pinNumber;
	float acctBalance;

};