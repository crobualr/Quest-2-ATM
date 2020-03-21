#pragma once
#include <vector>
#include<iostream>
using namespace std;
class Database {
public:
	Database();
	void append(Account const& a);
	bool find(Account const & account);
	vector<Account>getAccounts() const;
private:
	vector<Account>accounts;
};