#include <iostream>
#include "Account.h"
#include "Database.h"
using namespace std;

int main() {
	enum class ATM{balance = 1, transfer = 2, logOut = 3, exit = 4};

	int atmOption;
	cout << "Press (1) to Register a New Account\nPress (2) to Access Account\n " << endl; 
	cin >> atmOption;
	if (atmOption == 1) {
		cout << "Please enter Account Member ID: " << endl;

		cout << "Please enter Account Member Pin: " << endl;
	}
	else if (atmOption == 2) {

	}
	else {
		cout << "Press correct key (1) or (2)" << endl;
	}

	int bankingOptions = 0 ;
	while ((ATM)bankingOptions != ATM::exit){
		
		cout << "Press (1) to display balance \nPress (2) to transfer to another account\nPress (3) to logout account\nPress (4) to terminate program" << endl;
		cin >> bankingOptions;
		switch ((ATM)bankingOptions) {
		case ATM::balance:
			cout << "Account Balance: " << endl;
			break;
		case ATM::transfer:

			cout << "Transfer from: Enter Account Member ID: " << endl;

			cout << "Enter Account Withdrawal Amount: " << endl;

			cout << "Transfer to: Enter Account Member ID: " << endl;

			cout << "Enter Account Deposit Amount: " << endl;
			break;
		case ATM::logOut:
			
			char acctMember;
			cout << "Do you wish to log in to another account?\nPress (Y)es or (N)o" << endl;
			cin >> acctMember;
			if (acctMember == 'y' || acctMember == 'Y') {
				cout << "Please enter Account Member ID: " << endl;

				cout << "Please enter Account Member Pin: " << endl;

			}
			break;
		case ATM::exit:
			cout << "Exiting program" << endl;
			break;
		}
	}
	system("PAUSE");
	system("CLS");
}