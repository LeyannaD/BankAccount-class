#include <iostream>
#include <string>
#include <vector>

#include "BankAccount.h"
using namespace std;

int main() {
  BankAccount act1;
  string customerName;
  int choice;
  double checkingAmount;
  double savingsAmount;
  double withdraw;
  double withdrawSaving;
  double transfer;
  int id = rand() % 9999 + 1000; // ramdom id
  srand(time(0));

  do {
    cout << "          *******WELCOME TO LEYLEY'S BANK******" << endl;
    cout << "Please enter your name: ";
    getline(cin, customerName);
    act1.setName(customerName);

    
    cout << "Welcome User " << act1.getName() << "-" << id << endl;
    cout << "MENU" << endl;
    cout << "1. Checking Account Balance" << endl;
    cout << "2. Savings Account Balance" << endl;
    cout << "3. Deposit Checking Account" << endl;
    cout << "4. Deposit Savings Account" << endl;
    cout << "5. Withdraw Checking Account" << endl;
    cout << "6. Withdraw Savings Account" << endl;
    cout << "7. Transfer To Savings Account" << endl;
    cout << "8. Exit" << endl;
    cout << "Which transaction would you like to do today?(1-8): "; 
    cin >> choice;

    switch (choice) {
    case 1:
      act1.setChecking(checkingAmount);
      cout << "Checking Account Balance:" << act1.getChecking() << endl;
      break;
    case 2:
      act1.setSavings(savingsAmount);
      cout << "Savings Account Balance: " << act1.getSavings() << endl;
      break;
    case 3:
      cout << "Enter Deposit Amount: ";
      cin >> checkingAmount;
      act1.depositChecking(checkingAmount);
      cout << "Checking Account: " << act1.getChecking() << endl;
      break;
    case 4:
      cout << "Enter Deposit Amount: ";
      cin >> savingsAmount;
      act1.depositSavings(savingsAmount);
      cout << "Savings Account: " << act1.getSavings() << endl;
      break;
    case 5:
      cout << "Enter Withdraw Amount: ";
      cin >> withdraw;
      act1.withdrawChecking(withdraw);
      cout << "Checking Account Is Now: " << act1.getChecking() << endl;
      break;
    case 6:
      cout << "Enter Withdraw Amount: ";
      cin >> withdrawSaving;
      act1.withdrawSavings(withdrawSaving);
      cout << "Savings Account Is now: " << act1.getSavings() << endl;
      break;
    case 7:
      cout << "Enter Transfer Amount: ";
      cin >> transfer;
      act1.TransferToSavings(transfer);
      cout << "Savings Account: " << act1.getSavings()
           << "Checking Account: " << act1.getChecking() << endl;
      break;
    case 8:
      cout << "Are you done? ";
      cin >> choice;
      BankAccount(customerName, checkingAmount, savingsAmount);
      cout << endl;
      cout << "Thank you for using Leyley's Bank!" << endl;
      
      return 0;
    default:
      cout << "Invalid Choice" << endl;
    }

    cout << "***************************************" << endl;
  } while (choice != 8);
 
}