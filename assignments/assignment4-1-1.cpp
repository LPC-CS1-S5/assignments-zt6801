// Zhiqi Tang
// A software company sells a package that retails for $99. Quantity discounts are given according to the following table. 
// 10-19, 20%; 20-49, 30%; 50-99, 40%, 100 or more; 50%
// Write a program that asks for the number of units sold and computes the total cost of the purchase. ** Input Validation: Input must be a positive integer. If we have negative input, just quit the program.

#include <iostream> 
#include <iomanip>
using namespace std;

int main() 

{
  // Constant
  const double RETAIL_PRICE= 99.0; 

  // Variables
  int Units; 
  double TotalCost, RetailCost;

  // Asking for the number of units sold
  cout << "Enter the number of units sold: ";
  cin >> Units; 

  if (Units > 0)
    {
      // Get the total amount before discount 
      RetailCost = Units * RETAIL_PRICE;
      // Set the numeric output formatting
      cout << setprecision(2) << fixed;
    }
    // Determine the discounts
    if (Units >= 10 && Units <= 19)
    {
      TotalCost = RetailCost - (RetailCost * .20);
      cout << "The total cost of the purchase is $" << TotalCost << "." << endl;
    }
    else if (Units >=20 && Units <=49)
    {
      TotalCost= RetailCost - (RetailCost * .30);
      cout << "The total cost of the purchase is $" << TotalCost << "." << endl;
    }
    else if (Units >=50 && Units <=99)
    {
      TotalCost= RetailCost - (RetailCost * .40);
      cout << "The total cost of the purchase is $" << TotalCost << "." << endl;
    }
    else if (Units >=100)
    {
      TotalCost = RetailCost - (RetailCost * .50);
      cout << "The total cost of the purchase is $" << TotalCost << "." << endl;
    }
else 
{
  // Input validation
  cout << "Program quit. Enter a number greater than 0." << endl;
}

  return 0;

}

// Troubleshooting-- When I originally wrote cin >>, I had the carrots as <<. I also wrote RetailCost as TotalCost so my code kept showing $0.00. When I fixed those, however, the code started running normally.