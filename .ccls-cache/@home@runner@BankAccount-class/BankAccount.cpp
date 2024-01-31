#include <iostream>
#include "BankAccount.h"

using namespace std;


BankAccount::BankAccount(string newName, double amt1, double amt2) {
  customerName = newName;
  savingsBalance = amt1;
  checkingBalance = amt2;
}
void BankAccount::setName(string newName){
  customerName = newName;
}
string BankAccount::getName(){
  return customerName;
}
void BankAccount::setChecking(double amt){
  checkingBalance = amt;
}
double BankAccount::getChecking(){
  return checkingBalance;
}
void BankAccount::setSavings(double amt){
  savingsBalance = amt;
}
double BankAccount::getSavings(){
  return savingsBalance;
}
void BankAccount::depositChecking(double amt){
  if(amt > 0){
    checkingBalance += amt;
  }
}
void BankAccount::depositSavings(double amt){
  if (amt > 0){
    savingsBalance += amt;
  }
}
void BankAccount::withdrawChecking(double amt){
  if (amt > 0){
    checkingBalance -= amt;
  }
}
void BankAccount::withdrawSavings(double amt){
  if (amt > 0){
    savingsBalance -= amt;
  }
}
void BankAccount::TransferToSavings(double amt){
  if(amt > 0){
    checkingBalance -= amt;  
    savingsBalance += amt;
  }
}