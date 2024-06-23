#include <iostream>
using namespace std;

int main()
{

  //declare the variables
  int user_change;
  int coins = 0;
  
  int Q = 0;
  int D = 0;
  int N = 0;
  int P = 0;
  
  string quart;
  string dime;
  string nick;
  string penn;

  //ask for input on change
  cout << "Please input the amount of change you have: ";
  cin >> user_change;

  //if input is 0, it will directly send at the bottom 
  
  //check if change in range... ask again if not
  while (user_change < 0)
    {
      cout << "Please input a positive change amount: ";
      cin >> user_change;
    }

  //start counting the coins
  while (user_change > 0)
    {
      //if change is greater than 25, add coin and quarter
      if (user_change >= 25)
      {
        user_change = user_change - 25;
        // add a overall coin
        coins = coins + 1;
        // add a quarter
        Q = Q + 1;
      }
        // if change is greater than 10, add coin and dime
      else if (user_change >= 10)
      {
        user_change = user_change - 10;
        // add a overall coin
        coins = coins + 1;
        // add a dime
        D = D + 1;
      }
        //if change is greater than 5, add coin and nickel
      else if (user_change >= 5)
      {
        user_change = user_change - 5;
        // add a overall coin
        coins = coins + 1;
        // add a dime
        N = N + 1;
      }
        // if change is greater than 1, add coin and penny
      else if (user_change >= 1)
      {
        user_change = user_change - 1;
        // add a overall coin
        coins = coins + 1;
        // add a dime
        P = P + 1;
      }
    }
// print all the coins and the quarter, dimes, nickels, and pennies
  cout << "The number of coins needed is: " << coins << endl;
  //check to see plural or singular
  quart = (Q == 1) ? "Quarter: " : "Quarters: ";
  cout << quart << Q << endl;
  
  //check to see plural or singular
  dime = (D == 1) ? "Dime: " : "Dimes: ";
  cout << dime << D << endl;
  
  //check to see plural or singular
  nick = (N == 1) ? "Nickel: " : "Nickels: ";
  cout << nick << N << endl;
  
  //check to see plural or singular
  penn = (P == 1) ? "Penny: " : "Pennies: ";
  cout << penn << P << endl;


  return 0;
}
