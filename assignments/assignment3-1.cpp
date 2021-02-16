// Zhiqi Tang CS01

// There are three seating categories at a stadium. For a softball game, Class A seats cost $15, Class B seats cost $12, and Class C seats cost $9
// Write a program that asks how many tickets for each class of seats were sold, then displays the amount of income generated from ticket sales.
//Format your dollar amount in fixed-point notation, with two decimal places of precision, and be sure the decimal point is always displayed.

#include <iostream>
#include <iomanip> 

using namespace std;

int main () 
{
  double ClassA = 15.00;
  double ClassB = 12.00;
  double ClassC = 9.00;
  double totalIncome;

  int TixA;
  int TixB;
  int TixC;

  cout << "How many tickets were sold in ClassA?" << endl;
  cin >> TixA;
  cout << "How many tickets were sold in ClassB?" << endl;
  cin >> TixB;
  cout << "How many tickets were sold in ClassC?" << endl;
  cin >> TixC;

  totalIncome = (ClassA*TixA) + (ClassB*TixB) + (ClassC+TixC);

  cout << setprecision(2) << fixed;
  cout << "Income generated from ticket sales: $" << totalIncome;

return 0;

}

