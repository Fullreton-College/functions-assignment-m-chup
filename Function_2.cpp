#include <iostream>
using namespace std;

const int TWINKIE_PRICE = 350;

// Prompt the user to insert coins until enough has been paid to buy
// a twinkie. The total amount inserted, in cents, is returned.
int accept_money();

// Returns the amount of change that should be returned to the user.
int compute_change(int total_paid);

int main()
{
  int money_entered, change;
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  
  cout << "DEEP-FRIED TWINKIES" << endl;
  cout << "VENDING MACHINE" << endl;
  cout << "$3.50 PER TWINKIE" << endl;
  
  money_entered = accept_money();
  cout << "ENJOY YOUR DEEP-FRIED TWINKIE" << endl;
  change = compute_change(money_entered);
  cout << "YOUR CHANGE IS $" << change / 100.0 << endl;
  
  return 0;
}

int accept_money()
{
    int money = 0;
    string coin;

    while (money < TWINKIE_PRICE)
    {
        cout << "PLEASE ENTER A COIN:" << endl;
        cout << "1. DOLLAR" << endl << "2. QUARTER" << endl;
        cout << "3. DIME" << endl << "4. NICKEL" << endl;
        
        cin >> coin;
        if (coin == "1")
        {
            money = money + 100;
        }
        else if (coin == "2")
        {
            money = money + 25;
        }
        else if (coin == "3")
        {
            money = money + 10;
        }
        else if (coin == "4")
        {
            money = money + 5;
        }
        else
        {
            cout << "INVALID INPUT; TRY AGAIN" << endl;
            continue;
        }

        cout << "YOU HAVE ENTERED $" << money / 100.0 << endl;
    }
    
    return money;
}

int compute_change(int total_paid) 
{
    return (total_paid - TWINKIE_PRICE);
}
