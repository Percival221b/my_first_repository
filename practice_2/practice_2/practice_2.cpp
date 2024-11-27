//1

#include <iostream>
using namespace std;

class bank_account {
private:
	string m_name;
	string m_account;
	double m_balance;
public:
	bank_account(string name, string account, double balance) {
		m_name = name;
		m_account = account;
		m_balance = balance;
	}
	void show_account() {
		cout << "Name: " << m_name << endl;
		cout << "Account: " << m_account << endl;
		cout << "Balance: " << m_balance << endl;
	}
	void save(double num){
		if (num < 0) {
			cout << "Number to save can't be negative." << endl;
		}
		else {
			m_balance += num;
			cout << "Saved " << num << endl;
			cout << "Left: " << m_balance << endl;
		}
	}
	void cash_out(double num){
		if(num < 0) {
			cout << "Number to cash out can't be negative." << endl;
		}
		else if (num > m_balance) {
			cout << "Balance insufficient. Can't cash out." << endl;
		}
		else {
			m_balance -= num;
			cout << "Cash out completed.";
			cout << "Left: " << m_balance << endl;
		}
	}

};

int main()
{
	string str1="w", str2 = "1234";
	bank_account test_account(str1,str2,100);
	test_account.show_account();
	test_account.save(50);
	test_account.cash_out(10);
	return 0;
}

