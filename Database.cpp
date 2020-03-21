#include "Account.h"
#include "Database.h"

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Database{
public:
	Database() {};

	void append(Account const & a) { 
		Database::accounts.push_back(a); 
	}

	bool find(Account const & a) {
		for (vector<Account>::iterator it = accounts.begin(); it != accounts.end(); it++) {
			if (it != accounts.end()) {
				cout << "Account number found" << endl;
				return true;
			}
			else {
				cout << "Account number not found" << endl;
			}
		}
		return false;
	}

	vector<Account> getAccounts() const {
		return accounts;
	}
	
private:
	vector<Account>accounts; 
};