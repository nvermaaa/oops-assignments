#include <iostream>
#include <string>

class Account
{
private:
  const long accountNumber;
  long transactionID;
  std::string transactionType;
  double balance;

  static long globalTransactionID;

public:
  Account(const long accNo, const double bal = 0.0)
      : accountNumber(accNo), balance(bal)
  {
    transactionID = 0;
    transactionType = "None";
  }

  long depositAmount(const long to, const long from, const double amount)
  {
    if (this->accountNumber == to)
    {
      balance += amount;
      transactionType = "Credit (Deposit)";
      transactionID = ++globalTransactionID;
    }
    return transactionID;
  }

  long creditAmount(const long to, const long from, const double amount)
  {
    if (this->accountNumber == from)
    {
      if (balance >= amount)
      {
        balance -= amount;
        transactionType = "Debit (Transfer)";
        transactionID = ++globalTransactionID;
      }
    }
    if (this->accountNumber == to)
    {
      balance += amount;
      transactionType = "Credit (Transfer)";
      transactionID = globalTransactionID;
    }
    return transactionID;
  }

  void displayDetails() const
  {
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Balance: " << balance << std::endl;
    std::cout << "Last Transaction ID: " << transactionID << std::endl;
    std::cout << "Transaction Type: " << transactionType << std::endl;
    std::cout << "------------------------" << std::endl;
  }
};

long Account::globalTransactionID = 1000;

int main()
{

  Account acc[5] = {
      Account(101, 1000),
      Account(102, 2000),
      Account(103, 1500),
      Account(104, 3000),
      Account(105, 2500)};

  acc[0].depositAmount(101, 0, 500);

  long t1 = acc[1].creditAmount(103, 102, 400);
  for (int i = 0; i < 5; i++)
  {
    acc[i].creditAmount(103, 102, 400);
  }

  long t2 = acc[3].creditAmount(105, 104, 700);
  for (int i = 0; i < 5; i++)
  {
    acc[i].creditAmount(105, 104, 700);
  }

  std::cout << "Transaction IDs: " << t1 << ", " << t2 << std::endl;

  std::cout << "\nAccount Details:\n";
  for (int i = 0; i < 5; i++)
  {
    acc[i].displayDetails();
  }

  return 0;
}