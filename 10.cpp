#include <iostream>
using namespace std;

class BankAccount {
private:
    double principal;

public:
    BankAccount(double p) : principal(p) {}

    double calculateInterest(double rate, double time) const {
        return (principal * rate * time) / 100;
    }
};

int main() {
    double principal, rate, time;
    cin >> principal >> rate >> time;

    const BankAccount account(principal);
    cout << account.calculateInterest(rate, time) << endl;

    return 0;
}