#ifndef BANKACCOUNTH
#define BANKACCOUNTH

#include <string>
using namespace std;

class BankAccount{
public:
  BankAccount(string newName = "none", double amt1 = 0, double amt2 = 0);
  void setName(string newName);
  string getName();
  void setChecking(double amt);
  double getChecking();
  void setSavings(double amt);
  double getSavings();
  void depositChecking(double amt);
  void depositSavings(double amt);
  void withdrawChecking(double amt);
  void withdrawSavings(double amt);
  void TransferToSavings(double amt);
private:
  string customerName = "none";
  double savingsBalance = 0;
  double checkingBalance = 0;
};

#endif