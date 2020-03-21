#include <vector>
#include "Account.h"
using namespace std;
#include <algorithm>
#include <iostream>
#include "Database.h"

class Database{
public:
	Database() {};

	void append(Account const & a) { 
		Database::accounts.push_back(a); 
	}

	bool Database::find(Account account)
	{
		return false;
	}

	vector<Account> getAccounts() const {
		return vector<Account>();
	}
	bool find(Account const & a){
		if (std::find(accounts.begin(), accounts.end(), a) != accounts.end()) {
		return false;
	}
private:
	vector<Account>accounts; 
};