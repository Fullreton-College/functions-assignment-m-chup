#include <iostream>
#include <cstdlib>
using namespace std;

string CoinFlip()
{
    int flip = (rand() % 2);
    if (flip == 0)
    {
        return "Tails";
    }
    else if (flip == 1)
    {
        return "Heads";
    }
}

int main() {
   int flipsnum;
   
   srand(2);

   cout << "Enter number of coin flips: ";
   cin >> flipsnum;
   cout << "The coin flip results are: ";

   for (int iterations = 1; iterations <= flipsnum; iterations++)
   {
    cout << CoinFlip() << " ";
   }
   cout << endl;

   return 0;
}
