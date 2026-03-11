#include <iostream>
using namespace std;

int acceptInput();
void computeCoins(int coinValue, int& num, int& amountLeft);
void returnChange(int amount, int numberQuarters, int numberDimes, int numberPennies);

int main()
{
  int amount, numberQuarters, numberDimes, numberPennies, amountLeft;
  
  cout << "Change coins calculator" << endl;

  char ans = 'y';
  while (ans == 'y' || ans == 'Y')
  {
    amount = acceptInput();
    amountLeft = amount;
    computeCoins(25, numberQuarters, amountLeft);
    computeCoins(10, numberDimes, amountLeft);
    computeCoins(1, numberPennies, amountLeft);
    returnChange(amount, numberQuarters, numberDimes, numberPennies);

    cout << endl << "Enter Y/y to run the program again." << endl;
    cout << "Enter any other character to terminate the program." << endl;
    cin >> ans;
  }
  
  return 0;
}

int acceptInput()
{
  int amountChange;
  cout << "Enter change amount: ";
  cin >> amountChange;
  return amountChange;
}

void computeCoins(int coinValue, int& num, int& amountLeft)
{
  num = amountLeft / coinValue;
  amountLeft = amountLeft % coinValue;
}

void returnChange(int amount, int numberQuarters, int numberDimes, int numberPennies)
{
  cout << amount << " cents can be given as " << numberQuarters << " quarter(s)," << endl;
  cout << numberDimes << " dime(s), and " << numberPennies << " penny/ies." << endl;
}
